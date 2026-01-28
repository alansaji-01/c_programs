#include <stdio.h>
#include <conio.h>
#include <math.h>

float simpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

float compoundInterest(float p, float r, float t)
{
    return p * pow(1 + r / 100, t) - p;
}

void main()
{
    int choice;
    float p, r, t, result;

    clrscr();
    printf("1.Simple Interest\n2.Compound Interest\n");
    scanf("%d", &choice);
    scanf("%f %f %f", &p, &r, &t);

    switch (choice)
    {
        case 1:
            result = simpleInterest(p, r, t);
            printf("Simple Interest = %.2f", result);
            break;
        case 2:
            result = compoundInterest(p, r, t);
            printf("Compound Interest = %.2f", result);
            break;
        default:
            printf("Invalid Choice");
    }
    getch();
}
