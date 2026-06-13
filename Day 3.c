// Day 3 uploaded
#include <stdio.h>
#include <conio.h>
int main() {
    int num, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
        flag = 0;
    else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("%d is a Prime Number", num);
    else
        printf("%d is Not a Prime Number", num);

    return 0;
}


#include <stdio.h>
#include <conio.h>
int main() {
    int start, end, i, j, flag;

    printf("Enter start and end range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers are:\n");

    for (i = start; i <= end; i++) {
        if (i <= 1)
            continue;

        flag = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag)
            printf("%d ", i);
    }

    return 0;
}


#include <stdio.h>
#include <conio.h>
int main() {
    int num1, num2, i, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }

    printf("GCD = %d", gcd);

    return 0;
}


#include <stdio.h>
#include <conio.h>
int main() {
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("LCM = %d", max);
            break;
        }
        max++;
    }

    return 0;
}