# C goto 语句

[C 学习之路](../README.md)  
C语言中的 **goto** 语句允许把控制无条件转移到同一函数内的被标记的语句。  
**注意：** 在任何编程语言中，都不建议使用 **goto** 语句。因为它使得程序的控制流难以追踪，使程序难以理解和难以修改。  
任何使用 **goto** 语句的程序都可以改写成不需要使用 **goto** 语句的写法。  

## 语法

C语言中 **goto** 语句的语法:

```c
goto label;
...
...
label: statement;
```

在这里， **label** 可以是任何除C关键字以外的纯文本，它可以设置在C程序中 **goto** 语句的前面或者后面。

![goto](goto%20语句_files/1.png)

## 流程图

![goto](goto%20语句_files/2.jpg)

## 实例

```c
#include <stdio.h>

int main()
{
    /* 局部变量定义 */
    int a = 10;

    /* do 循环执行 */
    LOOP:do
    {
        if (a == 15)
        {
            /* 跳过迭代 */
            a = a + 1;
            goto LOOP;
        }
        printf("a 的值：%d\n", a);
        a++;        
    } while (a < 20);
    
    return 0;
}
```

当上面的代码被编译和执行时，运行结果：
> a 的值：10  
a 的值：11  
a 的值：12  
a 的值：13  
a 的值：14  
a 的值：16  
a 的值：17  
a 的值：18  
a 的值：19
