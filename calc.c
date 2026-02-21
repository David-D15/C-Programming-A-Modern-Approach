#include <stdio.h>
#define twenty 10

int main(void)
{
    int amount, amount2;
    int twentybills;

    printf("Enter a dollar amount: ");
	scanf("%d", &amount);

    twentybills = amount / twenty;
	printf("$20 bills: %d\n", twentybills);
	amount2 = amount - (twentybills * twenty);

    printf("Amount left: %d", amount2);


    return 0;

}