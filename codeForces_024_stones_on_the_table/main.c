#include <stdio.h>
#include <stdlib.h>

#define MAX_STONE_COUNT 50

int main()
{
    int stonesCount, counter = 0;
    char stoneColors[MAX_STONE_COUNT];

    scanf("%d", &stonesCount);
    scanf("%s", stoneColors);

    while(stonesCount>1){
        if(stoneColors[stonesCount-1] == stoneColors[stonesCount-2]){
            counter++;
        }
        stonesCount--;
    }

    printf("%d", counter);
    return 0;
}
