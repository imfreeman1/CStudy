#include <stdio.h>

int main()
{
    float num1 = 0.0f;
    double num2 = 0.0;
    long double num3 =0.0l;

    printf("float: %d, double: %d, long double: %d\n",
        sizeof(num1),
        sizeof(num2),
        sizeof(num3)
        );

    return 0;
}

/*
실행결과 : 
float: 4, double: 8, long double: 8
float은 4바이트, double은 8바이트, long double은 8바이트이다. 메모리 점유량이 중요할땐 float을 많이 사용할 것 같다.
*/