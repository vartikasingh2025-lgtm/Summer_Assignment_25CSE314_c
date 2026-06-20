/*Function of palindrme number*/
#include <stdio.h>

int palindrome(int n)
{
    int temp = n, rev = 0, rem;

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    return (temp == rev);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (palindrome(num))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}


/*Function of armstrong number*/
#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    int temp = n, sum = 0, digits = 0, rem;

    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return (sum == n);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}


/*Function of fibonacci series*/

#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, c;

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}


/*Function for perfect number*/


#include <stdio.h>

int perfect(int n)
{
    int sum = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    return (sum == n);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (perfect(num))
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}#include <stdio.h>

int perfect(int n)
{
    int sum = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    return (sum == n);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (perfect(num))
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}