#include <stdio.h>
#include <float.h>

int main()
{
    float num1 = FLT_MIN;
    float num2 = FLT_MAX;

    num1 = num1 / 1000000000.0f;

    num2 = num2 * 1000.0f;

    printf("%e %e\n", num1, num2);

    return 0;
}

/*
실행결과 :
0.000000e+00 inf
실수에서 오버플로우는 무한이 되고, 언더플로우는 0 혹은 쓰레기 값이 된다는데, 이 쓰레기 값이 의미하는 바가 무엇일까? 
의미없는 값이 들어가 있는 것을 C에서는 쓰레기 값이라고 부른다.
정수와는 다르게 오버플로우가 발생했을때 최솟값으로 돌아가지 않고, 무한대가 표현된다.
*/