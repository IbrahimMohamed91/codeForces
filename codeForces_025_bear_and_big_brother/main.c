#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limakWeight, bobWeight, yearsCounter = 0;

    scanf("%d%d", &limakWeight, &bobWeight);

    while(limakWeight <= bobWeight){
        limakWeight *= 3;
        bobWeight *= 2;
        yearsCounter++;
    }
    printf("%d", yearsCounter);
    return 0;
}
