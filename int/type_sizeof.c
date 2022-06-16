#include <stdio.h>

int main()
{
    printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n",
        sizeof(char),
        sizeof(short),
        sizeof(int),
        sizeof(long),
        sizeof(long long)
    );

    return 0;
}

/*
char는 1바이트, short는 2바이트, int는 4바이트, long은 8바이트, long long은 8바이트의 결과를 가지고, unsigned가 붙어도 크기는 같다고 한다.
어떤 말인지는 알겠으나, 아직 이게 와닿지는 않는 느낌..? 아마 숫자 크기에 따라 메모리 할당량을 보여주고자 하는건가 싶은 생각도 든다.
 한 글자당 해당 숫자만큼의 메모리를 점유하는 것 같다. 아마두..
*/