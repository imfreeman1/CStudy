#include <stdio.h>

int main()
{
    int *numPt;
    int num1 = 10;

    numPt = &num1;

    printf("%d\n", *numPt);

    return 0;
}