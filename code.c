#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void generateRandomArray(int arr[], int size);
void printArraySample(int arr[], int size);

int main() {
    int *arr1 = malloc(SIZE * sizeof(int));
    int *arr2 = malloc(SIZE * sizeof(int));
    clock_t start, end;
    double cpu_time_used;

    if (arr1 == NULL || arr2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    generateRandomArray(arr1, SIZE);

    // Copy arr1 to arr2
    for (int i = 0; i < SIZE; i++) {
        arr2[i] = arr1[i];
    }

    printf("Sample of original array:\n");
    printArraySample(arr1, SIZE);

    // Merge Sort
    start = clock();
    mergeSort(arr1, 0, SIZE - 1);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nMerge Sort took %f seconds\n", cpu_time_used);
    printf("Sample of array after Merge Sort:\n");
    printArraySample(arr1, SIZE);

    // Quick Sort
    start = clock();
    quickSort(arr2, 0, SIZE - 1);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nQuick Sort took %f seconds\n", cpu_time_used);
    printf("Sample of array after Quick Sort:\n");
    printArraySample(arr2, SIZE);

    free(arr1);
    free(arr2);

    return 0;
}

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int *L = malloc(n1 * sizeof(int));
    int *R = malloc(n2 * sizeof(int));

    if (L == NULL || R == NULL) {
        printf("Memory allocation failed in merge function\n");
        exit(1);
    }

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void generateRandomArray(int arr[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10000;  // Random numbers between 0 and 9999
    }
}

void printArraySample(int arr[], int size) {
    printf("First 10 elements: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    printf("\nLast 10 elements: ");
    for (int i = size - 10; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

