#include <stdio.h>

// random programs

int main()
{
    int k;
    int i = 1;
    int j = 2;
    k = ++i + j++;
    printf("i is %d\n", i);
    printf("j is %d\n", j);
    printf("The sum is %d\n", k);

    return 0;
    
}