#include <stdio.h>

int main()
{
    struct bs{
        unsigned a: 1;
        unsigned b: 3;
        unsigned c: 4;
    } bit, *pbit;
    
    bit.a = 1; /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.b = 7; /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.c = 15; /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */

    printf("%d, %d, %d\n", bit.a, bit.b, bit.c); /* 以整型变量格式输出三个域的内容 */
    
    pbit = &bit; /* 把位域变量bit的地址发送给指针变量pbit */
    pbit->a = 0; /* 用指针方式给位域a 重新赋值，赋为0 */
    pbit->b&=3; /* 使用了复合位运算符"&=", 相当于：pbit->b = pbit->b&3, 位域b中原有值为7，与3作按位与运算的结果为3（111&011=011，十进制值为3） */
    pbit->c|=1; /* 使用了复合位运算符"|="，相当于：pbit->b = pbit->b|，其结果为15 */
    
    printf("%d, %d, %d\n", pbit->a, pbit->b, pbit->c); /* 用指针方式输出了这三个域的值 */
}