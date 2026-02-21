// num_divider - This program divides an amount into 20, 10, 5 and 1
// Chapter 2 Project 7

#include <stdio.h>

#define twenty 20    // directives that define the bill values
#define ten 10		// does not need ";"
#define five 5
#define one 1

int main(void)
{	
	int amount, amount2, amount3, amount4, amount5;
	int twentybills, tenbills, fivebills, onebills;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	twentybills = amount / twenty;
	printf("$20 bills: %d\n", twentybills);
	amount2 = amount - (twentybills * twenty);

	tenbills = amount2 / ten;
	printf("$10 bills: %d\n", tenbills);
	amount3 = amount2 - (tenbills * ten);

	fivebills = amount3 / five;
	printf("$5 bills: %d\n", fivebills);
	amount4 = amount3 - (fivebills * five);

	onebills = amount4 / one;
	printf("$1 bills: %d\n", onebills);
	
	return 0;


}	
