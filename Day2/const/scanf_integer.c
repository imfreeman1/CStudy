#define _CRT_SECURE_NO_WARNINGS // 이게 있어야 scanf를 사용할 수 있다. 그래야 컴파일 에러가 안난다. 
#include <stdio.h>

int main()
{
    int num1;

    printf("정수를 입력하세요: ");
    scanf("%d",&num1);

    printf("%d\n", num1);

    return 0;
}

