#include <stdio.h>
#include <conio.h>
int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i < num; i++) {
        if(num % i == 0) {
            sum = sum+i;
        }
    }

    if(sum == num)
        printf("%d is a Perfect Number.", num);
    else
        printf("%d is not a Perfect Number.", num);

    return 0;
}


#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0) {
        digit = temp % 10;
        fact = 1;

        for(i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if(sum == num)
        printf("%d is a Strong Number.", num);
    else
        printf("%d is not a Strong Number.", num);

    return 0;
}


#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}


#include <stdio.h>

int main() {
    long long num;
    long long largestPrimeFactor = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    while(num % 2 == 0) {
        largestPrimeFactor = 2;
        num /= 2;
    }

    for(long long i = 3; i * i <= num; i += 2) {
        while(num % i == 0) {
            largestPrimeFactor = i;
            num /= i;
        }
    }

    if(num > 2)
        largestPrimeFactor = num;

    printf("Largest Prime Factor = %lld", largestPrimeFactor);

    return 0;
}