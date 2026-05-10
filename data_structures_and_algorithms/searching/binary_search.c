#include <stdio.h>

int binary_search(int arr[], int low, int high, int key) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            return binary_search(arr, low, mid - 1, key);
        return binary_search(arr, mid + 1, high, key);
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 7, 12, 18, 20, 26};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 18;
    int result = binary_search(arr, 0, n - 1, key);
    if (result == -1)
        printf("Element not found in array\n");
    else
        printf("Element found at index %d\n", result);
    return 0;
}

