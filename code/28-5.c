#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void merge_sort(int arr[], int len)
{
    int* a = arr;
    int* b = (int*)malloc(len * sizeof(int));
    for (int seg = 1; seg < len; seg += seg)
    {
        for (int start = 0; start < len; start += seg + seg)
        {
            int low = start, mid = fmin(start + seg, len), high = fmin(start + seg + seg, len);
            int k = low;
            int start1 = low, end1 = mid;
            int start2 = mid, end2 = high;
            while (start1 < end1 && start2 < end2)
            {
                b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
            }
            while (start1 < end1)
            {
                b[k++] = a[start1++];
            }
            while (start2 < end2)
            {
                b[k++] = a[start2++];
            }
            
        }
        int* temp = a;
        a = b;
        b = temp;
    }
    if (a != arr)
    {
        for (int i = 0; i < len; i++)
        {
            b[i] = a[i];
        }
        b = a;
    }

    free(b);
    
}

int main()
{
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = (int)sizeof(arr) / (int)sizeof(*arr);
    merge_sort(arr, len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}