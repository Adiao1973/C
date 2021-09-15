#include <stdio.h>
#include <string.h>

/* 定义简单的结构 */
struct{
    unsigned int widthValidated;
    unsigned int heightValidated;
} status_1;

/* 定义位域结构 */
struct
{
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
} status_2;

int main()
{
    printf("Memory size occupied by status_1 is %d\n", sizeof(status_1));
    printf("Memory size occupied by status_2 is %d\n", sizeof(status_2));

    return 0;
}