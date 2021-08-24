# C 嵌套 if 语句

[C 判断](../README.md)  
在C语言中， **嵌套** if-else语句是合法的，这意味着可以在一个 **if** 或 **else if** 语句内使用另一个 **if** 或 **else if** 语句。

## 语法

C 语言中 **嵌套if** 语句的语法：

```c
if(boolean_expression 1)
{
    /* 当布尔表达式 1 为真时执行 */
    if(boolean_expression 2)
    {
        /* 当布尔表达式 2 为真时执行 */
    }
}
```

可以嵌套 **else if...else** ，方式与嵌套`if`语句相似。

## 实例

```c
#include <stdio.h>

int main()
{
    /* 局部变量定义 */
    int a = 100;
    int b = 200;

    /* 检查布尔条件 */
    if(a == 100)
    {
        /* 如果条件为真，则检查下面的语句 */
        if(b == 200)
        {
            /* 如果条件为真，则输出下面的语句 */
            printf("a 的值是 100， 且 b 的值是 200\n");
        }
    }
    printf("a 的准确值是 %d\n", a);
    printf("b 的准确值是 %d\n", b);

    return 0;
}
```

当上面的代码被编译和执行时，运行结果;
> a 的值是 100， 且 b 的值是 200  
a 的准确值是 100  
b 的准确值是 200
