#include <stdio.h>

int main()
{

    printf("%s %s\n", "Hello", "1234");

    return 0;

}

/*
include <stdio.h>는 printf를 사용하기위해 해주는 것이라고 한다. 파이썬에서 import와 비슷한 느낌이 아닌가 생각하고 있다.
printf는 print format이였음. format형식에 맞춰서 출력해준다. print가 따로 있었음.
%s는 string, %d는 demical을 출력해줌! 또 .c 파일에서는 main()함수가 하나만 존재 할 수 있다고 함.
return 0;는 main함수의 return을 말하는 것 같은데 python과 다르게 print문만 넣고 함수를 마무리 할 수는 없나봄.
검색 결과 return 0;는 함수를 정상적으로 끝내기 위해 사용한다고 한다.!
*/