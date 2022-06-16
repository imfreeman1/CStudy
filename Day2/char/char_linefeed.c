#include <stdio.h>

int main()
{
    char c1 = 'a';
    char c2 = 'b';
    char lineFeed = '\n';

    printf("%c%c%c%c", c1,lineFeed,c2,lineFeed);

    printf("%d 0x%x\n", lineFeed, lineFeed);

    return 0;
}
/*
개행문자도 변수에 선언해줄 수 있고, 불러서 사용할 수 있다. \n의 아즈키코드는 10이다.
*/