/*
* Nearly Lucky Number
* lucky numbers are the positive integers contain only the lucky digits 4 and 7.
* For example, numbers 47, 744, 4
* Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number.
* date: 01/03/2023
*/

#include<stdio.h>

int main(void){
    unsigned long long number;
    unsigned short counter = 0;
    unsigned char digit;
    scanf("%llu", &number);

    while (number != 0)
    {
        digit = number%10;
        if (digit == 4 || digit == 7)
        {
            counter++;
        }
        number /= 10;
    }

    if (counter == 4 || counter == 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
