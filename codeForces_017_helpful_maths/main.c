#include <stdio.h>
#include <stdlib.h>

#define MAX_CHARACTER_NUMBER 101

int main()
{
    char equation [MAX_CHARACTER_NUMBER];
    int characterCounter1 = 0, characterCounter2 = 0;
    printf("Enter the equation: ");
    scanf("%s", equation);
    while(equation[characterCounter1] != '\0'){
        characterCounter2 = characterCounter1;
        while(equation[characterCounter2])
        characterCounter1++;
    }
    return 0;
}
