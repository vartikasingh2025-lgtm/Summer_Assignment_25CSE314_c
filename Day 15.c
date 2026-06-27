/*Reverse an array*/
#include <stdio.h>

void reverseArray(int arr[], int n) {
    int i = 0, j = n - 1, temp;
    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
/*Rotate an array left*/

#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotate(int arr[], int n, int d) {
    d = d % n;
    reverseArray(arr, 0, d - 1);
    reverseArray(arr, d, n - 1);
    reverseArray(arr, 0, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    leftRotate(arr, n, d);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
/*Rotate an array right*/
#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rightRotate(int arr[], int n, int d) {
    d = d % n;
    reverseArray(arr, 0, n - 1);
    reverseArray(arr, 0, d - 1);
    reverseArray(arr, d, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    rightRotate(arr, n, d);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
/*Move zeroes to end*/
#include <stdio.h>

void moveZeroesToEnd(int arr[], int n) {
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeroesToEnd(arr, n);

    for (int i = 0; i <c n; i++)
        printf("%d ", arr[i]);

    return 0;
}
