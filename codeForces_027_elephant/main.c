/*
** (27) elephant
** An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0
** and his friend's house is located at point x(x>0) of the coordinate line. In one step the
** elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps
** he need to make in order to get to his friend's house.
** input: The first line of the input contains an integer x (1≤x≤1000000) — The coordinate of the friend's house.
** output: Print the minimum number of steps that elephant needs to make to get from point 0 to point x.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int houseCoordinate, steps = 1;

    scanf("%d", &houseCoordinate);

    while(houseCoordinate > 5){
        houseCoordinate -= 5;
        steps++;
    }
    printf("%d", steps);
    return 0;
}
