/**
 *
 * Wrong Subtraction
 * Little girl Tanya is learning how to decrease a number by one,
 * but she does it wrong with a number consisting of two or more digits.
 * Tanya subtracts one from a number by the following algorithm:
 *      * if the last digit of the number is non-zero, she decreases the number by one;
 *      * if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).
 * date: 28/2/2023
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long number;
    unsigned short subtractionCounter;
    // enter the number from which we will subtract
    scanf("%lu", &number);
    // enter number of subtractions
    scanf("%hu", &subtractionCounter);

    while(subtractionCounter > 0){
        if((number%10) != 0){
            number--;
        }
        else{
            number /= 10;
        }
        subtractionCounter--;
    }
    // print the result
    printf("%lu", number);
}
