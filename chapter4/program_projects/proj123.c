#include<stdio.h>

// Project 1 and 2 asks for a three digit number and reverses it.

int main()
{
    int input_num, tens_digit, one_digit, hundred_digit;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &hundred_digit, &tens_digit, &one_digit);

    /* hundred_digit = input_num / 100;
    tens_digit = (input_num / 10) % 10 ;
    one_digit = input_num % 10;
    */
    printf("The reversal is: %d%d%d", one_digit, tens_digit, hundred_digit);
}
