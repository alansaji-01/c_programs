#include <stdio.h>
#include <conio.h>

int reverse(int n)
{
    int r = 0;
    while (n != 0)
    {
        r = r * 10 + n % 10;
        n = n / 10;
    }
    return r;
}

float largest(float a, float b)
{
    if (a > b)
        return a;
    else
        return b;
}

int calc(int n)
{
    if (n % 2 == 0)
        return n / 2;
    else
        return n * 3;
}

int equal(int a, int b, int c)
{
    if (a == b || b == c || a == c)
        return 1;
    else
        return 0;
}

void main()
{
    int ch, n, a, b, c;
    float x, y;

    clrscr();
    printf("1.Reverse\n2.Largest\n3.Calc\n4.Equal\n");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1:
            scanf("%d", &n);
            printf("Reverse = %d", reverse(n));
            break;
        case 2:
            scanf("%f%f", &x, &y);
            printf("Largest = %.2f", largest(x, y));
            break;
        case 3:
            scanf("%d", &n);
            printf("Result = %d", calc(n));
            break;
        case 4:
            scanf("%d%d%d", &a, &b, &c);
            if (equal(a, b, c))
                printf("Equal");
            else
                printf("Not Equal");
            break;
    }
    getch();
}
