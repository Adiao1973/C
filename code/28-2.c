#include <stdio.h>

void selection_sort(int a[], int len)
{
    int temp;

    for (int i = 0; i < len - 1; i++)
    {
        int min = i; // 记录最小值，第一个元素默认最小
        for (int j = i + 1; j < len; j++)
        {
            if (a[j] < a[min]) // 找到目前最小值
            {
                min = j; // 记录最小值
            }
            
        }

        if (min != i)
        {
            temp = a[min]; // 交换两个变量
            a[min] = a[i];
            a[i] = temp;
            /* swap(&a[min], &a[i]); */ // 使用自定义函数交换
        }
        
    }
    
}

// void swap(int *a, int *b)  // 交换两个变量
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

int main()
{
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = (int)sizeof(arr) / (int)sizeof(*arr);
    selection_sort(arr, len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}