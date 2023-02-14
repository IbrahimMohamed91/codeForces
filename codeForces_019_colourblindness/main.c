#include <stdio.h>
#include <stdlib.h>

#define MAX_COLOR_NUMBER 101

int main()
{
    int testCasesCounter, columns, colorCounter;
    char raw1[MAX_COLOR_NUMBER], raw2[MAX_COLOR_NUMBER];

    //printf("Enter the number of test cases: ");
    scanf("%d", &testCasesCounter);

    while(testCasesCounter)
    {
        //printf("Enter the number of columns: ");
        scanf("%d", &columns);

        //printf("Enter the colors of the first raw: ");
        scanf("%s", raw1);

        //printf("Enter the colors of the second raw: ");
        scanf("%s", raw2);

        colorCounter = 0;
        while(colorCounter < columns)
        {
            if(raw1[colorCounter] == 'R' || raw2[colorCounter] == 'R')
            {
                if(raw2[colorCounter] != 'R' || raw1[colorCounter] != 'R')
                {
                    break;
                }
            }

            colorCounter++;
        }
        if(colorCounter == columns)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

        testCasesCounter--;
    }
    return 0;
}
