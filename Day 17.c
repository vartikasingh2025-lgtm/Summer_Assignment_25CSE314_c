/*Merge arrays*/
#include <stdio.h>

int main() {
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    int c[n1 + n2];

    int k = 0;
    for (int i = 0; i < n1; i++) {
        c[k++] = a[i];
    }
    for (int i = 0; i < n2; i++) {
        c[k++] = b[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
/*Union of arrays*/
#include <stdio.h>

int isPresent(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) return 1;
    }
    return 0;
}

int main() {
    int a[] = {1, 2, 3, 2};
    int b[] = {3, 4, 5, 1};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    int uni[n1 + n2];
    int k = 0;

    for (int i = 0; i < n1; i++) {
        if (!isPresent(uni, k, a[i])) {
            uni[k++] = a[i];
        }
    }
    for (int i = 0; i < n2; i++) {
        if (!isPresent(uni, k, b[i])) {
            uni[k++] = b[i];
        }
    }

    printf("Union of arrays: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", uni[i]);
    }

    return 0;
}
/*Intersection of arrays*/
#include <stdio.h>

int isPresent(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) return 1;
    }
    return 0;
}

int main() {
    int a[] = {1, 2, 3, 2, 4};
    int b[] = {3, 4, 5, 1};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    int inter[n1 < n2 ? n1 : n2];
    int k = 0;

    for (int i = 0; i < n1; i++) {
        if (isPresent(b, n2, a[i]) && !isPresent(inter, k, a[i])) {
            inter[k++] = a[i];
        }
    }

    printf("Intersection of arrays: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", inter[i]);
    }

    return 0;
}
/*Command element in c*/
#include <stdio.h>

int isPresent(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) return 1;
    }
    return 0;
}

int main() {
    int a[] = {1, 2, 3, 2, 4};
    int b[] = {3, 4, 5, 1};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    int common[n1 < n2 ? n1 : n2];
    int k = 0;

    for (int i = 0; i < n1; i++) {
        if (isPresent(b, n2, a[i]) && !isPresent(common, k, a[i])) {
            common[k++] = a[i];
        }
    }

    printf("Common elements: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", common[i]);
    }

    return 0;
}
