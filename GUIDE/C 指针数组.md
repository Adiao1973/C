# C 指针数组

[C 学习之路](../README.md)  
在讲解指针数组的概念之前，先看一个实例，它用到了一个由3个整数组成的数组：

```c
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
```

当上面的代码被编译和执行时，运行结果：
> Value of var[0] = 10  
Value of var[1] = 100  
Value of var[2] = 200

可能有一种情况，想要让数组存储指向`int`、`char`或其它数据类型的指针。下面是一个指向整数的指针数组的声明：

```c
int *ptr[MAX];
```

在这里，把`ptr`声明为一个数组，由MAX个整数指针组成。因此，`ptr`中的每个元素，都是一个指向`int`值的指针。下面的实例用到了三个整数，它们将存储在一个指针数组中，如下所示：

```c
#include <stdio.h>

const int MAX = 3;

int main()
{
    int var[] = {10, 100, 200};
    int i, *ptr[MAX];

    for (i = 0; i < MAX; i++)
    {
        ptr[i] = &var[i]; /* 赋值为整数的地址 */
    }
    for(i = 0; i < MAX; i++)
    {
        printf("Value of var[%d] = %d\n", i, *ptr[i]);
    }
    return 0;
}
```

当上面的代码被编译和执行时，运行结果：
> Value of var[0] = 10  
Value of var[1] = 100  
Value of var[2] = 200

也可以用一个指向字符的指针数组来存储一个字符串列表，如下：

```c
#include <stdio.h>

const int MAX = 4;

int main()
{
    const char *names[] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
        "Sara Ali"
    };
    for (int i = 0; i < MAX; i++)
    {
        printf("Value of names[%d] = %s\n", i, names[i]);
    }
    return 0;
}
```

当上面的代码被编译和执行时，运行结果：
> Value of names[0] = Zara Ali  
Value of names[1] = Hina Ali  
Value of names[2] = Nuha Ali  
Value of names[3] = Sara Ali
