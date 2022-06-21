#include <stdio.h>

int main()
{
    int num = 13;
    int array[20] = {0,};
    int i = 0;
    int check;

    while (1)
    {
        if (num == 1)
        {
            array[i] = num;
            printf("num: %d\n", num);
            break;
        }
        check = num % 2;
        num = num / 2;
        printf("check num: %d\n", num);
        printf("check: %d\n", check);
        array[i] = check;
        i++;
    }

    printf("%s: ", "array");

    for (int j = i; j >=0; j--)
    {
        printf("%d", array[j]);
    }
 
    printf("\n");
 
    return 0;
}