#include <stdio.h>

int main()
{
    char num1 = 128;

    unsigned char num2 = 256;

    printf("%d %u\n", num1, num2);

    return 0;
}

/*
overflow와 underflow는 변수에 선언한 숫자가 범위를 벗어났을 때, 발생하는 것으로 범위 다음의 수
ex) char num1 = 128;에서는 범위를 넘어서서 음수로 넘어가 -128이 출력.
ex) unsigned char num2 = 256;은 0을 출력.
범위가 원형리스트로 구성 되어있는 것으로 예상하고 있음.
*/