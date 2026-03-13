#include<stdio.h>

// This program is supposed to convert base 10 number to octal (base 8) number

int main()
{
    int input_num, tenthousand, thousand, hundred, ten, one; 

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &input_num);

    
    tenthousand = input_num % 8;                 // To convert to octal, divide the number 8 and the remainder is the last digit                                                                  
    thousand = (input_num / 8) % 8;              // then take the number that you divided with and divide it by 8 again, then add the remainder to the octal result
    hundred = (input_num / 64) % 8;
    ten = (input_num / 512) % 8;
    one = (input_num / 4096) & 8;

    printf("In octal, your number is: %1d%1d%1d%1d%1d", 
           one, ten, hundred, thousand, tenthousand);

    return 0;
}