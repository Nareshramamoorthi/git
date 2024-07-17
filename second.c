#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // Assuming the array size is 100, change as needed
    int firstLargest, secondLargest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize firstLargest and secondLargest with the first two elements
    if (arr[0] > arr[1]) {
        firstLargest = arr[0];
        secondLargest = arr[1];
    } else {
        firstLargest = arr[1];
        secondLargest = arr[0];
    }

    // Traverse the array to find the firstLargest and secondLargest
    for (i = 2; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    printf("Second largest element in the array: %d\n", secondLargest);

    return 0;
}
