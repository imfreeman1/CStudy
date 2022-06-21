#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2;

    num2 = num1 ? 100 : 200;

    printf("%d\n", num2);

    printf("%s\n", num1 == 0 ? "0입니다.\n" : "0이 아닙니다.\n");

    return 0;
}