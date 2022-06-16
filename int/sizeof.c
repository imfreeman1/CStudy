#include <stdio.h>

int main()
{
    int num1 = 0;
    int size;

    size = sizeof num1;

    printf("num1의 크기: %d\n", size);

    return 0;
}

/*
sizeof는 자료형의 크기를 구하기 위해 사용한다. 자료형의 크기는 byte단위로 출력되며 여기서는 4로 출력!
size = sizeof(int);와 같은 형식으로는 자료형이 크기를 구할 수는 없고, 위 코드와 같은 형식으로 사용해야 한다.
*/