#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool b1 = true;

    if (b1 == true)
    {
        printf("참\n");
    }
    else
    {
        printf("거짓\n");
    }

    printf("int의 크기: %d\n", sizeof(int));
    printf("bool의 크기: %d\n", sizeof(bool));
    
    return 0;
}