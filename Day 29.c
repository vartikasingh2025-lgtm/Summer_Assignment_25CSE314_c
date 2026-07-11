// Menu driven calculator
#include <stdio.h>

int main() {
    int choice;
    float a, b;

    do {
        printf("\n===== MENU DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch(choice) {
            case 1:
                printf("Result = %.2f\n", a + b);
                break;

            case 2:
                printf("Result = %.2f\n", a - b);
                break;

            case 3:
                printf("Result = %.2f\n", a * b);
                break;

            case 4:
                if(b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Division by zero is not possible.\n");
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}
// Menu driven array operation system
#include <stdio.h>

int main() {
    int arr[100], n, i, choice, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n===== ARRAY MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Largest Element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum += arr[i];
                printf("Sum = %d\n", sum);
                break;

            case 3: {
                int max = arr[0];
                for(i = 1; i < n; i++)
                    if(arr[i] > max)
                        max = arr[i];
                printf("Largest Element = %d\n", max);
                break;
            }

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}

// Menu driven string operation system
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    do {
        printf("\n===== STRING MENU =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;

            case 3:
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;

            case 4:
                printf("Enter second string: ");
                scanf("%s", str2);

                if(strcmp(str1, str2) == 0)
                    printf("Strings are Equal\n");
                else
                    printf("Strings are Not Equal\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}
// Inventory management system
#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item item;

    printf("===== Inventory Management System =====\n");

    printf("Enter Item ID: ");
    scanf("%d", &item.id);

    printf("Enter Item Name: ");
    scanf("%s", item.name);

    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);

    printf("Enter Price: ");
    scanf("%f", &item.price);

    printf("\n----- Inventory Details -----\n");
    printf("Item ID   : %d\n", item.id);
    printf("Item Name : %s\n", item.name);
    printf("Quantity  : %d\n", item.quantity);
    printf("Price     : Rs. %.2f\n", item.price);
    printf("Total Value: Rs. %.2f\n", item.quantity * item.price);

    return 0;
}
