#include<stdio.h>
#include<conio.h>

int sum(int a,int b){return a+b;}
int rem(int a,int b){return a%b;}
float pro(float a,float b){return a*b;}
int printWord(char w[]){printf("%s %s",w,w);return 0;}

int main()
{
    int ch,a,b;
    float x,y;
    char w[20];

    printf("1.sum\n 2.Reminder\n 3.Product\n 4.word\n");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            scanf("%d%d",&a,&b);
            printf("sum=%d", sum(a,b));
            break;

        case 2:
            scanf("%d%d",&a,&b);
            printf("reminder=%d", rem(a,b));
            break;

        case 3:
            scanf("%f%f",&x,&y);
            printf("product=%f", pro(x,y));
            break;

        case 4:
            scanf("%s", w);
            printWord(w);
            break;

        default:
            printf("Invalid choice");
    }

    getch();
    return 0;
}
