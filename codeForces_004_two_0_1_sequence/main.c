#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n, m, flag;
    char a[51], b[51];
    int bIndex, aIndex;
    //printf("Enter the number of test cases: ");
    scanf("%d", &t);

    for(int testCasesCounter = 0; testCasesCounter < t; testCasesCounter++)
    {
        //printf("Enter the length of a: ");
        scanf("%d", &n);

        //printf("Enter the length of b: ");
        scanf("%d", &m);

        //printf("Enter the string (a) of length %d consisting only of (0 and 1): ", n);
        scanf("%s", a);

        //printf("Enter the string (b) of length %d consisting only of (0 and 1): ", m);
        scanf("%s", b);

        aIndex = 0;
        bIndex = 0;
        flag = 0;

        if(n == 1 && m == 1)
        {
            if(a[aIndex] == b[bIndex])
            {
                flag = 1;
            }
        }

        else if (m == 1)
        {
            while(a[aIndex] != '\0')
            {
                if(a[aIndex] == b[bIndex])
                {
                    flag = 1;
                    break;
                }
                aIndex++;
            }
        }

        else
        {
            while(aIndex < n - m + 1)
            {
                if(a[aIndex] == b[bIndex])
                {
                    bIndex++;
                    break;
                }
                aIndex++;
            }
            if(bIndex != 0)
            {
                aIndex = n - m + 1;
                flag = 1;
                while(a[aIndex] != '\0')
                {
                    if(a[aIndex] != b[bIndex])
                    {
                        flag = 0;
                        break;
                    }
                    aIndex++;
                    bIndex++;
                }
            }
        }

        if(flag == 0)
        {
            printf("NO\n");
        }

        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
