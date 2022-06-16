#include <stdio.h>

int main()
{
    char c1 = 0x61;
    char c2 = 0x62;

    printf("%c, %d, 0x%x\n", c1, c1, c1);
    printf("%c, %d, 0x%x\n", c2, c2, c2);



    char c3 = '0';
    char c4 = 0;

    printf("%c %d\n", c3, c3);

    printf("%c %d\n", c4, c4);

    return 0;
}

/*
실행결과 :
a, 97, 0x61
b, 98, 0x62
0 48
 0
c1과 c2에 넣은 수는 16진법 수이다. %c는 char를 출력해서 string이 출력 됨. %d는 숫자가 출력된다. 0x%x는 16진법 수가 출력된다.
string 0는 %c로 출력하면 0이 출력되고, %d는 아즈키코드가 출력되어 나온다. 0의 아즈키코드는 48!
정수형 0는 %c로 출력하면 null값이라 출력되지 않고, %d로 출력하였을 때, 0이 출력되어 나온다. 
*/