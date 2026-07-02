/*Merge two sorted arrays*/
#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n1, n2, i, j, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    i = j = 0;

    while(i < n1 && j < n2) {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < n1)
        c[k++] = a[i++];

    while(j < n2)
        c[k++] = b[j++];

    printf("Merged Array: ");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}
/*Common characters in two strings*/
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for(i = 0; str1[i] != '\0'; i++)
        freq[(unsigned char)str1[i]] = 1;

    printf("Common Characters: ");

    for(i = 0; str2[i] != '\0'; i++) {
        if(freq[(unsigned char)str2[i]] == 1) {
            printf("%c ", str2[i]);
            freq[(unsigned char)str2[i]] = 0;
        }
    }

    return 0;
}
/*Sort names alphabetically*/
#include <stdio.h>
#include <string.h>

int main() {
    char names[20][50], temp[50];
    int n, i, j;

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter names:\n");
    for(i = 0; i < n; i++)
        scanf("%s", names[i]);

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Names in Alphabetical Order:\n");
    for(i = 0; i < n; i++)
        printf("%s\n", names[i]);

    return 0;
}
/*Sort words by length*/
#include <stdio.h>
#include <string.h>

int main() {
    char words[20][50], temp[50];
    int n, i, j;

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter words:\n");
    for(i = 0; i < n; i++)
        scanf("%s", words[i]);

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words Sorted by Length:\n");
    for(i = 0; i < n; i++)
        printf("%s\n", words[i]);

    return 0;
}