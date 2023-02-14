/**
 *  Name       : Three Doors
 *  Author     : Ibrahim Mohamed
 *  Created on : 31/07/2022
 *  Description: There are three doors in front of you, numbered from 1 to 3 from left to right.
 *               Each door has a lock on it, which can only be opened with a key with the same number on it
 *               as the number on the door. There are three keys — one for each door. Two of them are hidden
 *               behind the doors, so that there is no more than one key behind each door. So two doors have
 *               one key behind them, one door does n't have a key behind it. To obtain a key hidden behind a door,
 *               you should first unlock that door. The remaining key is in your hands.
 *               For each test case, print "YES" if you can open all the doors. Otherwise, print "NO".
 */


#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_DOORS 3

int main()
{
    int t, x, a, b, c, doorsCounter;
    /*
        t : the number of test cases (1 <= t <= 18).
        x : the number of the key in your hand (1<= x <= 3).
        a : the number of the key behind the first door (0 <= a <= 3),if there is no key behind the door the number equals 0.
        b : the number of the key behind the second door (0 <= b <= 3),if there is no key behind the door the number equals 0.
        c : the number of the key behind the third door (0 <= c <= 3),if there is no key behind the door the number equals 0.
    */
    //printf("Enter the number of test cases: ");
    scanf("%d", &t); // store the number of test caces

    for(int testCaseCounter = 0; testCaseCounter < t; testCaseCounter++)
    {
        //printf("Enter the number of the key in your hand: ");
        scanf("%d", &x); // store the number of the key in your hand

        //printf("Enter the numbers of the keys behind each door: ");
        scanf(" %d", &a);
        scanf(" %d", &b);
        scanf(" %d", &c);

        //printf("%d\n%d\n%d\n%d\n%d\n", a, b, c, x, t);
        for(doorsCounter = 1; doorsCounter < NUMBER_OF_DOORS; doorsCounter++)
        {
            switch(x)
            {
            case 1:
                if(a != 0)
                {
                    x = a;
                }
                else{
                    doorsCounter = 3;
                }
                break;
            case 2:
                if(b != 0)
                {
                    x = b;
                }
                else{
                    doorsCounter = 3;
                }
                break;
            case 3:
                if(c != 0)
                {
                    x = c;
                }
                else{
                    doorsCounter = 3;
                }
                break;
            }

        }
        if(doorsCounter == NUMBER_OF_DOORS){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
