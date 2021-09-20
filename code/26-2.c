#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100];
    char *description;

    strcpy(name, "Adiao");

    /* 动态分配内存 */
    description = (char *)malloc(30 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy(description, "Adiao is a boy");
    }

    /* 假设想要存储更大的描述信息 */
    description  = (char *)realloc(description, 100 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcat(description, " and he is balabalabalbalabala");
    }
    
    printf("Name = %s\n", name);
    printf("Description: %s\n", description);

    /* 使用free（）函数释放内存 */
    free(description);
    
    return 0;
}