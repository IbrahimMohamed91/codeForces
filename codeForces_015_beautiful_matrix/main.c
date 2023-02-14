#include <stdio.h>
#include <stdlib.h>

int movesCalculator(int onePosition){
    int movesCount;
    switch(onePosition){
    case 0:
    case 4:
        movesCount = 2;
        break;
    case 1:
    case 3:
        movesCount = 1;
        break;
    default:
        movesCount = 0;
    }
    return movesCount;
}

int main()
{
    int matrix[5][5], beautifulMatrixMovesNumber = 0, rows, columns, oneRow, oneColumn;
    //printf("Enter a matrix: \n");
    for(rows = 0; rows < 5; rows++){
        for(columns = 0; columns < 5; columns++){
            scanf("%d", &matrix[rows][columns]);
            if(matrix[rows][columns]){
                oneRow = rows;
                oneColumn = columns;
            }
        }
    }

    beautifulMatrixMovesNumber = movesCalculator(oneRow) + movesCalculator(oneColumn);
    //printf("the minimum number of moves needed to make the matrix beautiful ");
    printf("%d\n", beautifulMatrixMovesNumber);
    return 0;
}
