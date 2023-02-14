#include <stdio.h>
#include <stdlib.h>

#define STRING_LENGTH 101

char * normalization(char * string){
    char letters[27] = "abcdefghijklmnopqrstuvwxyz";
    int characterCounter = 0, lettersCounter;

    while(string[characterCounter] != '\0'){
        lettersCounter = 0;
        while(letters[lettersCounter] != '\0'){
            if((letters[lettersCounter]-32 == string[characterCounter])){
                string[characterCounter] = letters[lettersCounter];
                break;
            }
            lettersCounter++;
        }
        characterCounter++;
    }
    return string;
}

int stringCompare(char * string1, char * string2){
    int characterCounter = 0;

    while(string1[characterCounter] != '\0'){
        if(string1[characterCounter] > string2[characterCounter]){
            return 1;
        }
        else if(string1[characterCounter] < string2[characterCounter]){
            return -1;
        }
        characterCounter++;
    }
    return 0;
}

int main()
{
    char firstBoughtString[STRING_LENGTH], secondBoughtString[STRING_LENGTH];

    //printf("Enter the first string:\n");
    scanf("%s", firstBoughtString);

    //printf("Enter the second string:\n");
    scanf("%s", secondBoughtString);

    printf("%d", stringCompare(normalization(firstBoughtString), normalization(secondBoughtString)));
    return 0;
}
