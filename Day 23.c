/*First non-repeating character*/
#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0}, i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for(i = 0; str[i] != '\0'; i++) {
        if(freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character: %c", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.");

    return 0;
}
/*First repeating character*/
#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0}, i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;

        if(freq[(unsigned char)str[i]] == 2) {
            printf("First repeating character: %c", str[i]);
            return 0;
        }
    }

    printf("No repeating character found.");

    return 0;
}
/*Anagram strings*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0}, i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not Anagrams");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
        freq[(unsigned char)str2[i]]--;
    }

    for(i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}
/*Maximum ocurring character*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0}, i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not Anagrams");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
        freq[(unsigned char)str2[i]]--;
    }

    for(i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}