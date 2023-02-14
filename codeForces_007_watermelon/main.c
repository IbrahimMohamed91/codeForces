#include <stdio.h>
#include <stdlib.h>

int main()
{
    int weight; // weight of the watermelon
    //printf("Enter the weight of the watermelon: ");
    scanf("%d", &weight);

    if(weight > 2 && weight % 2 == 0){
        printf("YES\n"); // the weight of the watermelon can be divided into two parts, each of them weighing even number of kilos
    }
    else {
        printf("NO\n");
    }
    return 0;
}
