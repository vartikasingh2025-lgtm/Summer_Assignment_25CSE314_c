/*Recursive factorial*/
#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %lld", factorial(n));

    return 0;
}

/*Reverse fibonacci*/
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("%dth Fibonacci term = %d", n, fibonacci(n));

    return 0;
}

/*Recursive sum of digits*/

#include <stdio.h>

int sumDigits(int n) {
    if (n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", sumDigits(n));

    return 0;
}

/*Recursive reverse number*/

#include <stdio.h>

int reverse = 0;

void reverseNumber(int n) {
    if (n == 0)
        return;

    reverse = reverse * 10 + n % 10;
    reverseNumber(n / 10);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    reverseNumber(n);

    printf("Reversed number = %d", reverse);

    return 0;
}