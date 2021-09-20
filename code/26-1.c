#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100];
    char *description;

    strcpy(name, "Adiao");

    /* 动态分配内存 */
    description = (char *)malloc(200 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy(description, "Adiao is a boy");
    }

    printf("Name = %s\n", name);
    printf("Description: %s\n", description);
}