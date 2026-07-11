// Student record system using strings and arrays
#include <stdio.h>

int main() {
    int n, i;
    int roll[100];
    float marks[100];
    char name[100][50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\n------ Student Records ------\n");
    printf("Roll\tName\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}
// Mini library system
#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b[5];
    int i;

    printf("Enter details of 5 books:\n");

    for(i = 0; i < 5; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Title: ");
        scanf("%s", b[i].title);

        printf("Author: ");
        scanf("%s", b[i].author);
    }

    printf("\n------ Library Records ------\n");

    for(i = 0; i < 5; i++) {
        printf("\nBook %d\n", i + 1);
        printf("ID     : %d\n", b[i].id);
        printf("Title  : %s\n", b[i].title);
        printf("Author : %s\n", b[i].author);
    }

    return 0;
}
// Mini employ management system
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[5];
    int i;

    printf("Enter details of 5 employees:\n");

    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n------ Employee Records ------\n");

    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID     : %d\n", emp[i].id);
        printf("Name   : %s\n", emp[i].name);
        printf("Salary : %.2f\n", emp[i].salary);
    }

    return 0;
}
// Mini project using arrays,strings and functions(Student management system)
#include <stdio.h>

void display(int roll[], char name[][50], float marks[], int n);

int main() {
    int roll[100], n, i;
    float marks[100];
    char name[100][50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    display(roll, name, marks, n);

    return 0;
}

void display(int roll[], char name[][50], float marks[], int n) {
    int i;

    printf("\n------ Student Records ------\n");
    printf("Roll\tName\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }
} 
