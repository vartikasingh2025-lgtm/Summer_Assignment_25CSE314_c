#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary = 0");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary = ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}


#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        rem = binary % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        binary = binary / 10;
    }

    printf("Decimal = %d", decimal);

    return 0;
}


#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        if (n % 2 == 1)
            count++;

        n = n / 2;
    }

    printf("Number of set bits = %d", count);

    return 0;
}


#include <stdio.h>

int main() {
    int x, n;
    long long result = 1;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter power (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        result = result * x;
    }

    printf("%d^%d = %lld", x, n, result);

    return 0;
}