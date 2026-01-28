#include <stdio.h>
#include <conio.h>

struct book
{
    char title[30];
    char author[30];
    int days;
    int fine;
};

void main()
{
    struct book b[5];
    int i;

    clrscr();

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of book %d\n", i + 1);

        printf("Book Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Author Name: ");
        scanf(" %[^\n]", b[i].author);

        printf("Days Issued: ");
        scanf("%d", &b[i].days);

        if (b[i].days > 7)
            b[i].fine = (b[i].days - 7) * 5;
        else
            b[i].fine = 0;
    }

    printf("\n--- Library Book Fine Details ---\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nBook Title : %s", b[i].title);
        printf("\nAuthor     : %s", b[i].author);
        printf("\nTotal Fine : Rs.%d\n", b[i].fine);
    }

    getch();
}
