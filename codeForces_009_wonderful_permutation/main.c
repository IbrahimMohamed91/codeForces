#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBER_OF_MEMBERS 101

int main()
{
    int testCasesCounter, n, k, memberCounter = 0, operationCounter, temp, subCounter, flag, integers[MAX_NUMBER_OF_MEMBERS];

    //printf("Enter the number of test cases: ");
    scanf("%d", &testCasesCounter);

    while(testCasesCounter > 0)
    {
        scanf("%d", &n);

        scanf("%d", &k);
        memberCounter = 0;
        operationCounter = 0;
        flag =0;
        while(memberCounter < n)
        {
            scanf("%d", &integers[memberCounter]);
            if(memberCounter < k)
            {
                if(integers[memberCounter] > k)
                {
                    flag = 1;
                }
            }
            memberCounter++;
        }
        if(flag)
        {
            memberCounter = 0;
            subCounter = k;
            while(memberCounter < k)
            {
                if(integers[memberCounter] > k)
                {
                    operationCounter++;

                    while(integers[subCounter] > k)
                    {
                        subCounter++;
                    }
                    temp = integers[memberCounter];
                    integers[memberCounter] = integers[subCounter];
                    integers[subCounter] = temp;
                }
                memberCounter++;

            }
        }
        printf("%d\n", operationCounter);
        testCasesCounter--;
    }

    return 0;
}
