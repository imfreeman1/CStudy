#include <stdio.h>
#include <limits.h>

int main()
{
    char num1 = CHAR_MIN;
    short num2 = SHRT_MIN;
    int num3 = INT_MIN;
    long num4 = LONG_MIN;
    long long num5 = LLONG_MIN;

    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

    char num6 = CHAR_MIN - 1;
    short num7 = SHRT_MIN - 1;
    int num8 = INT_MIN - 1;
    long num9 = LONG_MIN - 1;
    
    printf("%d %d %d %ld\n", num6, num7, num8, num9);

    return 0;
}

/*
드디어 처음으로 #include를 추가해봤다. 헤더파일이라고 부르는데 파일의 내용을 가져와서 사용하는 것 같다.
코딩도장에서 보면 LONG_MIN과 LLONG_MIN이 다르게 출력되는데 내가 실행한 파일에서는 두개가 같은 숫자로 출력된다.
아마 수정된게 아닌가 싶기도 하고..??
CHAR_MIN과 같은 인자들은 아마 <limits.h>의 내부 변수인듯 하다.
limits.h에 정의된 최솟값을 넘어서도 underflow가 발생한다. C언어에서는 정수 자료형의 크기를 생각하고 값 범위를 넘어서지 않도록 주의해야하는 듯 하다.
*/