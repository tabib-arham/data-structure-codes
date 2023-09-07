#include <stdio.h>

int main() {
    int n, i, element, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[50]; // Create an array with one extra space for the new element

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Validate the position
    do {
        printf("Enter the position (1 to %d) to insert the element: ", n );
        scanf("%d", &position);
    } while (position < 1 || position > n);

    // Shift elements to the right to make space for the new element
    for (i = n; i >= position; i--) {
        arr[i+1] = arr[i];
        arr[i]=arr[i-1];
    }

    // Insert the new element at the specified position
    arr[position - 1] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n ; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
