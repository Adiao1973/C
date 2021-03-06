#include <stdio.h>

void shell_sort(int arr[], int len)
{
    int temp;
    for (int gap = len >> 1; gap > 0; gap = gap >> 1)
    {
        for (int i = gap; i < len; i++)
        {
            temp = arr[i];
            int j;
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
            {
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = temp;
            
        }
        
    }
    
}

int main()
{
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = (int)sizeof(arr) / (int)sizeof(*arr);
    shell_sort(arr, len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}