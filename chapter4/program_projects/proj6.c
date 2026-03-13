#include <stdio.h>

// Project 6 is calculating the EAN check digit, which is just european version of the UPC

int n1, i2, i3, i4, i5, i6, i7, i8, i9, n10, n11, n12, first_sum, second_sum, total, check;     

int main()
{
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &n1, &i2, &i3, &i4, &i5, &i6, &i7, &i8,
        &i9, &n10, &n11, &n12);
    
    first_sum = (i2 + i4 + i6 + i8 + n10 + n12) * 3;
    second_sum = n1 + i3 + i5 + i7 + i9 + n11;

    total = (first_sum + second_sum - 1) % 10;
    check = 9 - total;

    printf("Check digit: %d", check);

    return 0;
}