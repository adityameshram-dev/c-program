/* Write a program to declare structure book having data members
book_name,
book_author,
book_price,
book_publication,
book_no_of_pages.
Accept and display information for three books.  */

#include <stdio.h>

struct book
{
    char book_name[100], book_author[50], book_publication[100];
    int book_price, book_no_of_pages;
};

int main()
{
    struct book b[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter Book name, author name, publication name, price of book, number of page of book:- \n");
        scanf(" %[^\n]", &b[i].book_name);
        scanf(" %[^\n]", &b[i].book_author);
        scanf(" %[^\n]", &b[i].book_publication);
        scanf(" %d", &b[i].book_price);
        scanf(" %d", &b[i].book_no_of_pages);
    }

    printf("\tBOOK INFORMATION\n");
    for (i = 0; i < 3; i++)
    {
        printf(" %s", b[i].book_name);
        printf(" %s", b[i].book_author);
        printf(" %s", b[i].book_publication);
        printf(" %d", b[i].book_price);
        printf(" %d", b[i].book_no_of_pages);
    }
}
