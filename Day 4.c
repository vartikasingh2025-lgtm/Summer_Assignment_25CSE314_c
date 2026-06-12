#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}


#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i;

    printf("Enter value of n: ");
    scanf("%d", &n);

    if(n == 1)
        printf("Nth Fibonacci term = %d", a);
    else if(n == 2)
        printf("Nth Fibonacci term = %d", b);
    else {
        for(i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Nth Fibonacci term = %d", b);
    }

    return 0;
}


#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, rem, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    while(temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if(sum == num)
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);

    return 0;
}


#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, rem, digits, sum;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong Numbers are:\n");

    for(num = start; num <= end; num++) {
        digits = 0;
        sum = 0;
        temp = num;

        while(temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        while(temp != 0) {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }

    return 0;
}