# C 嵌套 switch 语句

[C 学习之路]((../README.md))  
可以把一个 **switch** 作为一个外部 **switch** 的语句序列的一部分，即可以在一个 **switch** 语句内使用另一个 **switch** 语句。  
即使内部和外部 **switch** 的 **case** 常量包含共同的值，也没有矛盾。

## 语法

C语言中 **嵌套switch** 语句的语法：

```c
switch(ch1){
    case 'A':
        printf("这个A是外部switch的一部分")；
        switch(ch2){
        case 'A':
            printf("这个A是内部switch的一部分");
            break;
        case 'B':
            /* 内部 B case 代码 */
        } 
        break;
    case 'B': /* 外部 B case 代码 */
}
```

## 实例

```c
#include <stdio.h>

int main()
{
    /* 局部变量定义 */
    int a = 100;
    int b = 200;

    switch (a)
    {
        case 100:
            printf("这是外部 switch 的一部分\n");
            switch(b) {
                case 200:
                    printf("这个内部 switch 的一部分\n");
            }
            break;
        
        default:
            break;
    }
    printf("a 的准确值是 %d\n", a);
    printf("b 的准确值是 %d\n", b);

    return 0;
}
```

当上面的代码被编译和执行时，运行结果：
> 这是外部 switch 的一部分  
这个内部 switch 的一部分  
a 的准确值是 100  
b 的准确值是 200
