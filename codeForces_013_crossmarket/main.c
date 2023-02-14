#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int testCasesCounter, rows, columns, totalEnergy, temp;
    //printf("Enter number of test cases: ");
    scanf("%d", &testCasesCounter);

    while(testCasesCounter){
        //printf("Enter the number of rows and columns: ");
        scanf("%d %d", &rows, &columns);

        if(rows > columns){
            temp = rows;
            rows =columns;
            columns = temp;
        }


        totalEnergy = ((int)(rows/2) + (columns-1)) + ((int)(rows/2) + 1 + (int)(rows/2)) + (int)(rows/2);

        if(rows%2 == 0){
            totalEnergy -= 2;
        }
        if(rows == 1 && columns == 1){
            totalEnergy = 0;
        }

        printf("%d\n", totalEnergy);
        testCasesCounter--;
    }
    return 0;
}
