#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBER_OF_LETTERS_PER_DAY 3
#define MAX_LENGTH_OF_STRING 200000
#define MAX_NUMBER_OF_TEST_CASES 10000

int main()
{
    int t, numberOfLetters, numberOfDays, flag = 0, answers[MAX_NUMBER_OF_TEST_CASES];
    char string[MAX_LENGTH_OF_STRING], lettersPerDay[MAX_NUMBER_OF_LETTERS_PER_DAY+1];
    //printf("Enter the number of test cases: ");
    scanf("%d", &t);

    for(int counter = 0; counter < t; counter++)
    {
        //printf("Enter the string: ");
        scanf("%s", string);
        numberOfLetters = 0;
        numberOfDays = 1;

        for(int counter0 = 0; string[counter0] != '\0'; counter0++)
        {
            if(string[counter0] > 96 && string[counter0] < 123)
            {
                if(0 == numberOfLetters)
                {
                    lettersPerDay[numberOfLetters] = string[counter0];
                    numberOfLetters++;
                    lettersPerDay[numberOfLetters] = '\0';
                }
                else
                {
                    for(int counter1 = 0; lettersPerDay[counter1] != '\0'; counter1++)
                    {
                        if(lettersPerDay[counter1] == string[counter0])
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if(0 == flag)
                    {
                        lettersPerDay[numberOfLetters] = string[counter0];
                        numberOfLetters++;
                        lettersPerDay[numberOfLetters] = '\0';
                    }
                    else
                    {
                        flag = 0;
                    }
                }
                if(MAX_NUMBER_OF_LETTERS_PER_DAY == numberOfLetters)
                {
                    while(1)
                    {
                        if('\0' != string[counter0+1])
                        {
                            for(int counter2 = 0; counter2 < MAX_NUMBER_OF_LETTERS_PER_DAY; counter2++)
                            {
                                if(lettersPerDay[counter2] == string[counter0+1])
                                {
                                    flag = 1;
                                    break;
                                }
                            }
                            if(0 == flag)
                            {
                                numberOfLetters = 0;
                                numberOfDays++;
                                break;
                            }
                            else
                            {
                                flag = 0;
                                counter0++;
                            }
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
//        printf("Number of days: ");
//        printf("%d\n", numberOfDays);
            else
            {
                break;
            }

        }
        //printf("%d\n", numberOfDays);
        answers[counter] = numberOfDays;
    }
    for(int counter = 0; counter < t; counter++)
    {
        printf("%d\n", answers[counter]);
    }
    return 0;
}
