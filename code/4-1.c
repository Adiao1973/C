#include <stdio.h>

// 函数外定义变量x和y
int x;
int y;
int add_two_num()
{
    // 函数内声明变量x和y为外部变量
    extern int x;
    extern int y;
    // 给外部变量（全局变量）x和y赋值
    x = 1;
    y = 2;
    return x+y;
}

int main()
{
    int result;
    // 调用函数add_two_num
    result = add_two_num();

    printf("result 为：%d", result);
    return 0;
}