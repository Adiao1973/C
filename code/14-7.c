#include <stdio.h>

const int MAX = 3;

int main()
{
    int var[] = {10, 100, 200};

    for (int i = 0; i < MAX; i++)
    {
        printf("Value of var[%d] = %d\n", i, var[i]);
    }
    return 0;
}