#include <stdio.h>
#include <stdlib.h>

#define MAX_CHARACTER_NUMBER 101

int main()
{
    char summands[MAX_CHARACTER_NUMBER];
    int index1 = 0, index2 = 2, temp, firstNumberFlag = 0;
    scanf("%s", summands);

    while(summands[index1+1] == '+'){
        if(firstNumberFlag){
            printf("+");
        }
        while(summands[index2-1] == '+'){
            if(summands[index1] > summands[index2]){
                temp = summands[index1];
                summands[index1] = summands[index2];
                summands[index2] = temp;
            }
            index2+=2;
        }
        printf("%c", summands[index1]);
        index1+=2;
        index2 = index1 + 2;
        firstNumberFlag = 1;
    }
    if(summands[index1-1] == '+'){
        printf("+%c", summands[index1]);
    }
    else{
        printf("%c", summands[index1]);
    }
}
