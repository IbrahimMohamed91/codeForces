#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD_LENGTH 1000

int main()
{
    char word[MAX_WORD_LENGTH];
    int index = 0;
    scanf("%s", word);

    if(word[index] > 'Z'){
        word[index] -= 32;
    }
    while((word[index] >= 'A' && word[index] <= 'Z') || (word[index] >= 'a' && word[index] <= 'z')){
        printf("%c", *(word+index));
        index++;
    }
}
