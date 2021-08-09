#include <stdio.h>

/* 定义两个全局变量 */
int x = 1;
int y = 2;
int add_two_num();
int main()
{
    int result;
    result = add_two_num();
    printf("result 为：%d\n", result);
    return 0;
}