/*string rotation*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not Rotation Strings");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if(strstr(temp, str2))
        printf("Rotation Strings");
    else
        printf("Not Rotation Strings");

    return 0;
}
/*Compress a string*/
#include <stdio.h>

int main() {
    char str[100];
    int i, count;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        count = 1;

        while(str[i] == str[i + 1]) {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    return 0;
}
/*Longest word in sentence*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[100], longest[100];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(1) {
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            word[j] = '\0';

            if(j > max) {
                max = j;
                strcpy(longest, word);
            }

            j = 0;

            if(str[i] == '\0')
                break;
        }
        else {
            word[j++] = str[i];
        }

        i++;
    }

    printf("Longest word: %s", longest);

    return 0;
}
/*Remove duplicates from a string*/
#include <stdio.h>

int main() {
    char str[100];
    int visited[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("String after removing duplicates: ");

    for(i = 0; str[i] != '\0'; i++) {
        if(visited[(unsigned char)str[i]] == 0) {
            printf("%c", str[i]);
            visited[(unsigned char)str[i]] = 1;
        }
    }

    return 0;
}
