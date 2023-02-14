#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 11

int main()
{
    int testCasesCounter, stringLength, characterCounter1, characterCounter2;
    char string[MAX_STRING_LENGTH];
    char timur[6];
    //printf("Enter the number of test cases: ");
    scanf("%d", &testCasesCounter);

    while(testCasesCounter)
    {
        strcpy(timur, "Timur");
        //printf("Enter the string length: ");
        scanf("%d", &stringLength);

        //printf("Enter the string: ");
        scanf("%s", string);

        if(stringLength != 5)
        {
            printf("NO\n");
        }
        else
        {
            characterCounter1 = 0;
            while(string[characterCounter1] != '\0')
            {
                characterCounter2 = 0;
                while(timur[characterCounter2] != '\0'){
                    if(string[characterCounter1] == timur[characterCounter2])
                    {
                        timur[characterCounter2] = '1';
                        break;
                    }
                    characterCounter2++;
                }
                if(characterCounter2 == 5)
                {
                    break;
                }
                characterCounter1++;
            }
            if(characterCounter1 == 5)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        testCasesCounter--;
    }




    return 0;
}
