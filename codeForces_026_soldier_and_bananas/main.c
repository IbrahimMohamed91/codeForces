#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstBananaCost, initialMoney, bananasCount, totalCost = 0;

    scanf("%d%d%d", &firstBananaCost, &initialMoney, &bananasCount);

    while(bananasCount > 0){
        totalCost += firstBananaCost*bananasCount;
        bananasCount--;
    }

    printf("%d", totalCost>initialMoney?totalCost-initialMoney:0);
    return 0;
}
