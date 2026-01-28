#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct student s[50];
    int n, topIndex = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
        if(s[i].marks > s[topIndex].marks)
            topIndex = i;
    }
    printf("\nTopper Details:\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f",
           s[topIndex].name, s[topIndex].roll, s[topIndex].marks);
    return 0;
}