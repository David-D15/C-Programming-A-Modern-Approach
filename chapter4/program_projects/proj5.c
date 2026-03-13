#include<stdio.h>

/* Program 5 is rewriting upc.c so that user enters 11 digits at one time, instead of entering one digits,
then five, then another five to get the check digit
*/

int first, i1, i2, i3, i4, i5; 
int k1, k2, k3, k4, k5, check, first_sum, second_sum, total;


int main()
{
    // Asks user input for the UPC. Treats each number as a single digit. 
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
         &first, &i1, &i2, &i3, &i4, &i5, &k1, &k2, &k3, &k4, &k5);




    
    // Computes sum of 1st and 2nd group of five digits
    first_sum = (first + i2 + i4 + k1 + k3 + k5) * 3;
    second_sum = i1 + i3 + i5 + k2 + k4;

    // Subtracts 1 and calculates the remainder when total is divided by 10 then subtracted from 9.
    total = (first_sum + second_sum) - 1;
    check = 9 - (total % 10);

    // print result as the check digit
    printf("Check digit: %d\n", check);

    return 0;

    
}