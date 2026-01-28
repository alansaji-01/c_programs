#include <stdio.h>
#include <conio.h>

struct consumer
{
    char name[50];
    int number;
    int units;
    float bill;
};

void main()
{
    struct consumer c[5];
    int i;

    clrscr();
    for (i = 0; i < 5; i++)
    {
        scanf(" %[^n]", c[i].name);
        scanf("%d", &c[i].number);
        scanf("%d", &c[i].units);

        if (c[i].units <= 100)
            c[i].bill = c[i].units * 3;
        else
            c[i].bill = (100 * 3) + (c[i].units - 100) * 5;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%s %d %.2f\n",
               c[i].name,
               c[i].number,
               c[i].bill);
    }
    getch();
}
