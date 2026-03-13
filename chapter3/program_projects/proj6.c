#include<stdio.h>

// A modification of addfrac.c program of Section3.2 so that the user enters both fractions at the same time

int main()
{
    // declares integer variables
    int num1, denom1, num2, denom2, result_num, result_denom;
    
    // asks for user input in fraction+fraction format
    printf("Enter fractions: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
    
    // calculates the result of the numerator and denominator
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    // prints the sum in fraction format
    printf("The sum is %d/%d", result_num, result_denom);

    return 0;
}