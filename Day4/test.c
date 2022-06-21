#include <stdio.h>

int main()
{
    int count = 0;
    for (int i =1; i <= 100; i += 7)
        {
            count++;
        }
    printf("%d\n", count);
    
    return 0;
}