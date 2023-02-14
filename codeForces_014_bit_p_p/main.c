#include <stdio.h>
#include <stdlib.h>

int main()
{
    int StatementsNumber, xValue = 0;
    char operation[4];

    //printf("Enter the number of statements: ");
    scanf("%d", &StatementsNumber);

    while(StatementsNumber){
        scanf("%s", operation);
        if(operation[1] == '+'){
            xValue++;
        }
        else if(operation[1] == '-'){
            xValue--;
        }
        StatementsNumber--;
    }

    //printf("The value of X is ");
    printf("%d\n", xValue);
    return 0;
}
