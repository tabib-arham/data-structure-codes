#include <stdio.h>

int main() {
    int n, i, element, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[50];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("enter the position we want to delete\n");
    scanf("%d",&position);


    if(position<0||position>n+1)
    {
        printf("invalid position delete cannot be done\n");
    }
    else{
            int item=arr[position-1];
    for (i = position-1; i <n+1; i++) {
        arr[i] = arr[i+1];

    }
    }


    n--;

    printf("Array after delete:\n");
    for (i = 0; i < n ; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
