#include <stdio.h>
#include <stdint.h> //headerfile

int main()
{
    int8_t num1 = -128;
    int16_t num2 = 32767;
    int32_t num3 = 2147483647;
    int64_t num4 = 9223372036854775807;

    printf("%d %d %d %lld\n",num1,num2,num3,num4);

    uint8_t num5 = 255;
    uint16_t num6 =65535;
    uint32_t num7 = 4294967295;
    uint64_t num8 = 1844674407370951615;

    printf("%u %u %u %llu\n", num5, num6, num7, num8);

    return 0;
}

/*
<stdint.h>는 현재 주로 사용하는 정수 자료형이다. 크기를 정확하게 표현해야 하는 파일 압축 및 암호화, 네트워크 프로그래밍을 할 때 특히 유용하며,
일반적인 프로그래밍에서도 <stdint.h>를 사용하는 것이 좋다. 최댓값과 최솟값이 header file에 정의되어 있으므로 limits.h header file을 사용하지 않아도 됨.
크기가 비트 단위로 표시되어 있다고 하는데 무슨 말인지는 잘 모르겠음.. ㅎ
*/