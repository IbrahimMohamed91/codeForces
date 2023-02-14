#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 101
#define MAX_CHARACTER_LENGTH 27

int main()
{
    char userName[MAX_NAME_LENGTH], distinctCharacters[MAX_CHARACTER_LENGTH];
    int userNameIndex = 0, distinctCharactersIndex = 0, index, distinctFlag = 1;

    scanf("%s", userName);
    distinctCharacters[distinctCharactersIndex++] = userName[userNameIndex++];

    while(userName[userNameIndex] >= 'a' && userName[userNameIndex] <= 'z'){
        index = 0;
        while(index < distinctCharactersIndex){
            if(distinctCharacters[index] == userName[userNameIndex]){
                distinctFlag = 0;
                break;
            }
            else{
                index++;
            }
        }
        if(distinctFlag){
            distinctCharacters[distinctCharactersIndex++] = userName[userNameIndex];
        }
        else{
            distinctFlag = 1;
        }
        userNameIndex++;
    }
    if((distinctCharactersIndex)%2 == 0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
    return 0;
}
