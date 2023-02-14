#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, s, tempSum, digit, digits, digitsum, max, position, flag;

    //printf("Enter the number of test cases: ");
    scanf("%d", &t);

    for(int testCasesCounter = 0; testCasesCounter < t; testCasesCounter++)
    {
        flag = 0;
        digits = 0;
        position = 1;
        max = 9;
        digitsum = 0;
        //printf("Enter the sum of digits: ");
        scanf("%d", &s);


        tempSum = s;
        while(digitsum != s)
        {
            digit = 1;
            while(digit <= max)
            {
                if(tempSum - digit == 0)
                {
                    digitsum += digit;
                    flag = 1;
                    break;
                }
                digit++;
            }
            if(flag == 0)
            {
                tempSum -= max;
                max--;
                digitsum += digit-1;
                digits += (digit-1)*position;
                position *= 10;
            }
            else{

            digits += (digit)*position;
            position *= 10;}
        }
        //printf("the minimum varied number: ");
        printf("%d\n", digits);
    }
    return 0;
}
