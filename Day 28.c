// Library management system
#include <stdio.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
};

int main() {
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.bookId);

    printf("Enter Book Title: ");
    scanf("%s", b.title);

    printf("Enter Author Name: ");
    scanf("%s", b.author);

    printf("\n----- Library Record -----\n");
    printf("Book ID     : %d\n", b.bookId);
    printf("Book Title  : %s\n", b.title);
    printf("Author Name : %s\n", b.author);

    return 0;
}
// Bank account system
#include <stdio.h>

int main() {
    int accountNo, choice;
    char name[50];
    float balance, amount;

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    do {
        printf("\n----- BANK MENU -----\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount Deposited Successfully!\n");
                break;

            case 2:
                printf("Enter Withdrawal Amount: ");
                scanf("%f", &amount);

                if(amount <= balance) {
                    balance -= amount;
                    printf("Amount Withdrawn Successfully!\n");
                } else {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("\nAccount Number : %d\n", accountNo);
                printf("Account Holder : %s\n", name);
                printf("Current Balance: %.2f\n", balance);
                break;

            case 4:
                printf("Thank You for Using the Bank System!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
// Ticket booking system
#include <stdio.h>

int main() {
    char name[50];
    int tickets;
    float price = 200.0, total;

    printf("===== Ticket Booking System =====\n");

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    if (tickets <= 0) {
        printf("Invalid number of tickets!\n");
        return 0;
    }

    total = tickets * price;

    printf("\n----- Booking Details -----\n");
    printf("Customer Name   : %s\n", name);
    printf("Tickets Booked  : %d\n", tickets);
    printf("Price per Ticket: Rs. %.2f\n", price);
    printf("Total Amount    : Rs. %.2f\n", total);
    printf("Booking Successful!\n");

    return 0;
}
