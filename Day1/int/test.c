#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 20, num3 = 30; 


    printf("%d %d %d\n", num1, num2, num3);

    return 0;
}

/*
변수를 선언할때 각각 int num1 = 10; int num2 = 20;과 같이 선언해도 되지만, 같은 자료형일때는 위의 코드처럼
int num1 =10, num2 =20, num3 =30;으로 선언해줄 수 있다.
여기서는 printf에 숫자이기 떄문에 %d를 사용했다.
*/