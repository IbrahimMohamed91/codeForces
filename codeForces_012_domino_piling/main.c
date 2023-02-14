#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length, width, dominoesNumber;
    //printf("Enter the board length and width:");
    scanf("%d %d", &length, &width);
    dominoesNumber = (length*width)/2;
    //printf("Maximum number of dominoes");
    printf("%d\n", dominoesNumber);
    return 0;
}
