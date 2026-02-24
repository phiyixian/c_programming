#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

void checkBalance(float balance) {
    printf("Your current balance is: $%.2f\n", balance);
}

float deposit() {
    float amount = 0.0f;
    printf("Enter the amount to deposit: $");
    scanf("%f", &amount);

    if (amount < 0) {
        printf("Invalid amount. Deposit must be a positive number.\n");
        return 0.0f;
    }
    return amount;
}

float withdraw(float balance) {
    float amount = 0.0f;
    printf("Enter the amount to withdraw: $");
    scanf("%f", &amount);

    if (amount < 0) {
        printf("Invalid amount. Withdrawal must be a positive number.\n");
        return balance;
    } else if (amount > balance) {
        printf("Insufficient funds. Your current balance is: $%.2f\n", balance);
        return balance;
    }
    return balance - amount;
}

int main()
{
    // Simple Banking System
    float balance = 0.0f;
    int choice = -1;

    while(choice != 4)
    {
        printf("\nSimple Banking System\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance += deposit();
            printf("Deposit successful. New balance: $%.2f\n", balance);
            break;
        case 3:
            balance = withdraw(balance);
            printf("Withdrawal successful. New balance: $%.2f\n", balance);
            break;
        case 4:
            printf("Thank you for using the Simple Banking System. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } 

    return 0;
}