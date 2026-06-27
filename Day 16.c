/*Missing number in array*/
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int total = (n + 1) * (n + 2) / 2;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Missing number = %d\n", total - sum);
    return 0;
}
/*Maximum frequency element*/
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 1, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxCount = 0, element = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }

    printf("Maximum frequency element = %d\n", element);
    printf("Frequency = %d\n", maxCount);

    return 0;
}
/*Pair with given sum*/
#include <stdio.h>

int main() {
    int arr[] = {1, 4, 7, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int found = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No pair found\n");
    }

    return 0;
}
/*Remove duplicates from array*/
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int unique[n];
    int k = 0;

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i] == unique[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unique[k++] = arr[i];
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}