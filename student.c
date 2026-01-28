#include <stdio.h>
#include <conio.h>

struct student
{
    char name[20];
    int roll, m1, m2, m3;
};

float average(int total)
{
    return total / 3.0;
}

void main()
{
    struct student s[5];
    int i, total;

    clrscr();
    for (i = 0; i < 5; i++)
    {
        scanf("%s %d %d %d %d",
              s[i].name,
              &s[i].roll,
              &s[i].m1,
              &s[i].m2,
              &s[i].m3);

        total = s[i].m1 + s[i].m2 + s[i].m3;

        printf("%s %d %d %.2f ",
               s[i].name,
               s[i].roll,
               total,
               average(total));

        if (average(total) >= 40)
            printf("Pass\n");
        else
            printf("Fail\n");
    }
    getch();
}
