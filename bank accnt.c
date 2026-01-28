#include <stdio.h>
struct account {
    char name[50];
    int accNo;
    float balance;
};
void deposit(struct account *a, float amount) {
    a->balance += amount;
}
void withdraw(struct account *a, float amount) {
    if(amount > a->balance)
        printf("Insufficient balance\n");
    else
        a->balance -= amount;
}
int main() {
    struct account a;
    float amt;
    printf("Enter name: ");
    scanf("%s", a.name);
    printf("Enter account number: ");
    scanf("%d", &a.accNo);
    printf("Enter balance: ");
    scanf("%f", &a.balance);
    printf("Enter deposit amount: ");
    scanf("%f", &amt);
    deposit(&a, amt);
    printf("Enter withdrawal amount: ");
    scanf("%f", &amt);
    withdraw(&a, amt);
    printf("\nFinal Balance: %.2f", a.balance);
    return 0;
}