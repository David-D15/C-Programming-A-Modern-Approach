// A bunch of random programs I test during the chapter
#include<stdio.h>

// Computes  a Universal Product Code check digit

int first, i1, i2, i3, i4, i5; 
int j10, j2, j3, j4, j5, check, first_sum, second_sum, total;


int main()
{
    // Asks user input for the UPC. Treats each number as a single digit. 
    printf("Enter the first (single) digit: ");
    scanf("%d", &first);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j10, &j2, &j3, &j4, &j5);
    
    // Computes sum of 1st and 2nd group of five digits
    first_sum = (first + i2 + i4 + j10 + j3 + j5) * 3;
    second_sum = i1 + i3 + i5 + j2 + j4;

    // Subtracts 1 and calculates the remainder when total is divided by 10 then subtracted from 9.
    total = (first_sum + second_sum) - 1;
    check = 9 - (total % 10);

    // print result as the check digit
    printf("Check digit: %d\n", check);

    return 0;

    
}