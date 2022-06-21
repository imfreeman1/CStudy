#include <stdio.h>

int main()
{
    int num1 = 20;
    int num2 = 10;
    int num3 = 30;
    int num4 = 15;

    printf("%d\n", num1 > num2 && num3 > num4); // num1은 20 num2는 10 그러므로 (num1 > num2) == 1 num3은 30 num4는 15 그러므로 (num3 > num4) == 1 이므로 && 연산자에서 1을 출력.
    printf("%d\n", num1 > num2 && num3 < num4); 
    
    printf("%d\n", num1 > num2 || num3 < num4); // (num1 > num2) == 1, (num3 < num4) == 0 이므로 || 연산자에서 0을 출력.
    printf("%d\n", num1 < num2 || num3 < num4);

    printf("%d\n", !(num1 > num2)); // num1 > num2 == 1이고 !(num1 > num2) == 0 이므로 0을 출력.

    return 0; 
}