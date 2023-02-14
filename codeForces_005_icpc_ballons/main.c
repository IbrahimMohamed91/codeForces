#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n, firstTimeFlag, ballonsTotalNum;
    char s[51], temp;
    //char problemLabels[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    //printf("Enter the number of test cases: ");
    scanf("%d", &t);

    for(int testCaseCounter = 0; testCaseCounter < t; testCaseCounter++)
    {
        //printf("Enter the length of string: ");
        scanf("%d", &n);

        //printf("Enter the string: ");
        scanf("%s", s);

        if(1 == n)
        {
            ballonsTotalNum = 2;
        }
        else
        {
            ballonsTotalNum = 2;
            for(int counter0 = 0; counter0 < n; counter0++)
            {
                for(int counter1 = counter0 + 1; counter1 < n; counter1++)
                {
                    if(s[counter0] < s[counter1])
                    {
                        temp = s[counter0];
                        s[counter0] = s[counter1];
                        s[counter1] = temp;
                    }
                }
            }

            for(int counter0 = 0; counter0 < n-1; counter0++)
            {
                if(s[counter0] == s[counter0+1])
                {
                    ballonsTotalNum++;
                }
                else
                {
                    ballonsTotalNum += 2;
                }
            }
        }
        printf("%d\n", ballonsTotalNum);
    }
    return 0;
}
