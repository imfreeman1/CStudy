#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("for: %d\n", i);
    }
    int j = 0;
    while (j <10)
    {
        printf("while: %d\n", j);
        j++;
    }
    int l = 0;
    for (; l <= 10; l++)
    {
        if (l % 2 == 0)
        {    
            printf("%d\n", l);
        }
    }

    return 0;
}