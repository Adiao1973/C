#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    struct Books Book_1; /* 声明Book1，类型为Books */
    struct Books Book_2; /* 声明Book2，类型为Books */

    /* Book1 详述 */
    strcpy(Book_1.title, "C Programming");
    strcpy(Book_1.author, "Nuda Ali");
    strcpy(Book_1.subject, "C Programming Tutorial");
    Book_1.book_id = 6496548;

    /* Book2 详述 */
    strcpy(Book_2.title, "Telecom Billing");
    strcpy(Book_2.author, "Zara Ali");
    strcpy(Book_2.subject, "Telecom Billing Tutorial");
    Book_2.book_id = 6488412;

    /* 输出Book1 信息 */
    printf("Book_1 title is %s\n", Book_1.title);
    printf("Book_1 author is %s\n", Book_1.author);
    printf("Book_1 subject is %s\n", Book_1.subject);
    printf("Book_1 book_id is %d\n", Book_1.book_id);

    /* 输出Book2 信息 */
    printf("Book_2 title is %s\n", Book_2.title);
    printf("Book_2 author is %s\n", Book_2.author);
    printf("Book_2 subject is %s\n", Book_2.subject);
    printf("Book_2 book_id is %d\n", Book_2.book_id);

    return 0;
}