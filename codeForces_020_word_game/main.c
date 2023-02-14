#include <stdio.h>
#include <stdlib.h>

#define WORD_LENGTH 4

void enterWords(char** words, int wordsNumber){
    for(int counter = 0; counter < wordsNumber; counter++)
    {
        scanf("%s", words[counter]);
    }
}

int main()
{
    int testCasesCounter, wordsNumber, player1Points = 0, player2Points = 0, player3Points = 0;
    char player1[][WORD_LENGTH]=0, player2[][WORD_LENGTH]=0, player3[][WORD_LENGTH]=0;

    printf("Enter the number of test cases: ");
    scanf("%d", &testCasesCounter);

    while(testCasesCounter)
    {
        printf("Enter the number of words: ");
        scanf("%d", &wordsNumber);

        printf("Enter the words of the first player: ");
        enterWords(player1, wordsNumber);

        printf("Enter the words of the second player: ");
        enterWords(player2, wordsNumber);

        printf("Enter the words of the third player: ");
        enterWords(player3, wordsNumber);



        testCasesCounter--;
    }
    return 0;
}
