// Student record management system
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Record ---\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Marks       : %.2f\n", s.marks);

    return 0;
}
// Employe management system
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("\n--- Employee Details ---\n");
    printf("ID     : %d\n", e.id);
    printf("Name   : %s\n", e.name);
    printf("Salary : %.2f\n", e.salary);

    return 0;
}
// Salary management system
#include <stdio.h>

int main() {
    char name[50];
    float basic, hra, da, gross;

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;
    gross = basic + hra + da;

    printf("\n--- Salary Details ---\n");
    printf("Employee Name : %s\n", name);
    printf("Basic Salary  : %.2f\n", basic);
    printf("HRA           : %.2f\n", hra);
    printf("DA            : %.2f\n", da);
    printf("Gross Salary  : %.2f\n", gross);

    return 0;
}
// Marksheet generation system
#include <stdio.h>

int main() {
    char name[50];
    float m1, m2, m3, total, percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &m3);

    total = m1 + m2 + m3;
    percentage = total / 3;

    printf("\n------ MARKSHEET ------\n");
    printf("Student Name : %s\n", name);
    printf("Subject 1    : %.2f\n", m1);
    printf("Subject 2    : %.2f\n", m2);
    printf("Subject 3    : %.2f\n", m3);
    printf("Total Marks  : %.2f\n", total);
    printf("Percentage   : %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade : A+\n");
    else if (percentage >= 75)
        printf("Grade : A\n");
    else if (percentage >= 60)
        printf("Grade : B\n");
    else if (percentage >= 40)
        printf("Grade : C\n");
    else
        printf("Grade : Fail\n");

    return 0;
}
