#include <stdio.h>

int main()
{
    printf("%c %d\n", 'a'+1,'a'+1);

    printf("%c %d\n", 97+1, 97+1);

    char c1 = 'a';

    printf("%c %d\n", c1+1,c1+1);

    return 0;
}

/*
'a'의 아즈키코드가 97이기때문에 a+1은 98이 된다. 
c언어에서는 char에 정수를 더할 수 있고, 그걸 %c로 출력하면 b가 나오고, %d로 출력하면 숫자 98이 나온다.
여기서 중요한 것은 char에 정수를 더할 수 있다는 것!
*/