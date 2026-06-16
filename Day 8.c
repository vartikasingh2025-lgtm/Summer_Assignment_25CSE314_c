/* Half pyramid pattern*/

#include <stdio.h>

int main() {
 int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/*Number triangle*/

#include <stdio.h>

int main() {
     int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

/*Character triangle*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(int i = 1; i <=n; i++) {
        for(char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}

/*Repeated number patterns*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}

