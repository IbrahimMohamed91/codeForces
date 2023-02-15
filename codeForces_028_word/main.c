/**
 *
 *
 *
 */


#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD_LENGTH 101

int main()
{
    char word[MAX_WORD_LENGTH], lowerCaseTemp[MAX_WORD_LENGTH], upperCaseTemp[MAX_WORD_LENGTH];
    int letterCounter = 0, upperCaseCounter = 0, lowerCaseCounter = 0;

    scanf("%s", word);
    while((word[letterCounter] != '\0')){
        if(word[letterCounter] < 'a'){
            upperCaseCounter++;
            upperCaseTemp[letterCounter] = word[letterCounter];
            lowerCaseTemp[letterCounter] = word[letterCounter]+32;
        }
        else{
            lowerCaseCounter++;
            upperCaseTemp[letterCounter] = word[letterCounter]-32;
            lowerCaseTemp[letterCounter] = word[letterCounter];
        }

        letterCounter++;
    }
    upperCaseTemp[letterCounter] = '\0';
    lowerCaseTemp[letterCounter] = '\0';
    letterCounter = 0;
    if(upperCaseCounter > lowerCaseCounter){
        while(upperCaseTemp[letterCounter] != '\0'){
            printf("%c", upperCaseTemp[letterCounter]);
            letterCounter++;
        }
    }
    else{
        while(lowerCaseTemp[letterCounter] != '\0'){
            printf("%c", lowerCaseTemp[letterCounter]);
            letterCounter++;
        }
    }

    return 0;
}
