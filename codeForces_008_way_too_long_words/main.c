#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBER_OF_LETTERS 101

int main()
{
    int numberOfWords, wordsCounter = 0, index;
    char word[MAX_NUMBER_OF_LETTERS];

    //printf("Enter the number of words: ");
    scanf("%d", &numberOfWords);

    while(wordsCounter < numberOfWords){
        //printf("Enter a word: ");
        scanf("%s",word);

        index = 0;
        while(word[index+1] != '\0'){
            index++;
        }

        if(index >= 10){
            printf("%c%d%c\n", word[0], index-1, word[index]);
        }
        else{
            printf("%s\n", word);
        }
        wordsCounter++;
    }
    return 0;
}
