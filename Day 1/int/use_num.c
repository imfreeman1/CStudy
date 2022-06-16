#include <stdio.h>

int main()
{
    unsigned char num1 = 200;
    unsigned short num2 = 60000;
    unsigned int num3 = 4123456789;
    unsigned long num4 = 4123456789;
    unsigned long long num5 = 1234567890123456789;

    printf("%u %u %u %lu %llu\n", num1, num2, num3, num4, num5);

    return 0;
}

/*
C에서 숫자를 사용할 때 선언하는 명령어가 여러개 존재함. char, short, int ,long, long long 등이 있었다.
unsigned와 signed가 있고, signed가 default로 지정되어 있음.
unsigned인 수를 printf하려면 %u를 사용해야한다고 배웠는데 %d도 사용가능하긴 했다. 
그리고 중요했던 건 아무래도 long과 long long에서 %lu, %llu의 형식으로 문자를 출력한다는 것이다.
*/