#include <stdio.h>

int main()
{
    int numArr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *numPtr = numArr;

    printf("%d\n", sizeof(numArr));

    printf("%d\n", sizeof(numPtr));

    printf("%d\n", *numPtr);

    printf("%d\n", numPtr);

    return 0;
}