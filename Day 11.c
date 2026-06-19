/*Function of Sum of two numbers*/

#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum = %d", sum(num1, num2));

    return 0;
}

/*  Function of Maximum of two numbers */

#include <stdio.h>

int maximum(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Maximum = %d", maximum(num1, num2));

    return 0;
}

/* Function  to check prime number*/

#include <stdio.h>

int isPrime(int n) {
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i <= n / 2; i++) {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

   
/*Function of factorial of number*/

#include <stdio.h>

int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial = %d", factorial(num));

    return 0;
}