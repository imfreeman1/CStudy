#include <stdio.h>

int main()
{
    float num1 = 3.e5f;

    double num2 = -1.3827e-2;

    long double num3 = 5.21e-9l;

    printf("%f %f %Lf\n", num1, num2, num3);

    printf("%e %e %Le\n", num1, num2, num3);

    return 0;
}

/*
C에서는 실수 표현시에 지수 표기법과 숫자를 적는 방법이 있다. 실수를 선언하는 방법 float, double, long double이 있다!
float은 숫자 뒤에 f를 붙여준다. 지수를 이용해서도 표현 할 수 있다.
 */