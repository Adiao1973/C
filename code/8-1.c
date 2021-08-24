#include <stdio.h>

int main()
{
    /* 局部变量定义 */
    int a = 10;

    /* 使用if语句检查布尔条件 */
    if(a < 20)
    {
        /* 如果条件为真，则输出下面的语句 */
        printf("a小于20\n");
    }
    printf("a的值是%d\n", a);
    return 0;
}