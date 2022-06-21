#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numPtr;    //numPtr 포인터 선언
    
    numPtr = malloc(sizeof(int));   //numPtr 포인터에 메모리 할당
    
    *numPtr = 10; //numPtr 포인터에 값 할당
    
    printf("%d\n", *numPtr);
    
    free(numPtr); //numPtr 포인터에 할당한 메모리 해제
    
    return 0;
}