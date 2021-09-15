#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

/* 函数声明 */
void printBook(struct Books book);

int main()
{
    struct Books Book_1; /* 声明 Book_1，类型为 Books */
    struct Books Book_2; /* 声明 Book_2，类型为 Books */

    /* Book_1 详述 */
    strcpy(Book_1.title, "C Programming");
    strcpy(Book_1.author, "Nuda Ali");
    strcpy(Book_1.subject, "C Programming Tutorial");
    Book_1.book_id = 6496548;

    /* Book2 详述 */
    strcpy(Book_2.title, "Telecom Billing");
    strcpy(Book_2.author, "Zara Ali");
    strcpy(Book_2.subject, "Telecom Billing Tutorial");
    Book_2.book_id = 6488412;

    /* 输出 Book_1 信息 */
    printBook(Book_1);

    /* 输出 Book_2 信息 */
    printBook(Book_2);

    return 0;
}

void printBook(struct Books book)
{
    printf("Book title is %s\n", book.title);
    printf("Book author is %s\n", book.author);
    printf("Book subject is %s\n", book.subject);
    printf("Book book_id is %d\n", book.book_id);
}
