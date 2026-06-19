/*Star Pyramid*/

#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++)
            printf(" ");

        for(j = 1; j <= (2 * i - 1); j++)
            printf("*");

        printf("\n");
    }

    return 0;
}

/*Reverse Pyramid*/

#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = n; i >= 1; i--) {
        for(j = 1; j <= n - i; j++)
            printf(" ");

        for(j = 1; j <= (2 * i - 1); j++)
            printf("*");

        printf("\n");
    }

    return 0;
}

/*Number Pyramid*/


#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {

        for(j = 1; j <= n - i; j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("%d", j);

        for(j = i - 1; j >= 1; j--)
            printf("%d", j);

        printf("\n");
    }

    return 0;
}

/*Character Pyramid*/

#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {

        for(j = 1; j <= n - i; j++)
            printf(" ");

        for(j = 0; j < i; j++)
            printf("%c", 'A' + j);

        for(j = i - 2; j >= 0; j--)
            printf("%c", 'A' + j);

        printf("\n");
    }

    return 0;
}