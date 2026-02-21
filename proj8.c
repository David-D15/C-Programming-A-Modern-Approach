// Program that calculates the remaining balance after 1st,2nd and 3rd monthly payments

#include <stdio.h>

int main(void)
{
    float loan, interest, monthly;
    float balance1, balance2, balance3;


    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly);

    interest = (interest / 100) / 12; 
    
    balance1 = (loan - monthly) + (loan * interest);
    printf("Balance remaining after first payment: %.2f\n", balance1);

    balance2 = (balance1 - monthly) + (balance1 * interest);
    printf("Balance remaining after second payment: %.2f\n", balance2);
    
    balance3 = (balance2 - monthly) + (balance2 * interest);
    printf("Balance remaining after third payment: %.2f\n", balance3);
    
}