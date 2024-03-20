#include <stdio.h>

// Hàm sắp xếp dãy số theo thuật toán Insertion Sort
void insertionSort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Hàm in ra dãy số
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    printf("Nhap so luong phan tu cua day: ");
    scanf("%d", &n);
    int arr[n];

    printf("Nhap cac phan tu cua day:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Day so truoc khi sap xep: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Day so sau khi sap xep: ");
    printArray(arr, n);

    return 0;
}