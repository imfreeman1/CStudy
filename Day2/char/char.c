#include <stdio.h>

int main()
{
    char c1 = 'a';
    char c2 = 'b';

    printf("%c, %d\n", c1, c1);
    printf("%c, %d\n", c2, c2);

    return 0;
}

/*
실행결과 :
a, 97
b, 98
char를 %d로 출력하면 아즈키코드가 출력되어 숫자로 나온다. %c는 문자를 출력해준다.
*/