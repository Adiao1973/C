#include <stdio.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("../tmp/test.txt", "w+");
    fprintf(fp, "This is testing for fprntf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);

    return 0;
}