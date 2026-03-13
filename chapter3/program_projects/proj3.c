#include<stdio.h>

int main()
{
    int gs1, groupid, publisher, itemnum, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &groupid, &publisher, &itemnum, &check);

    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", groupid);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", itemnum);
    printf("Check digit: %d\n", check);


}