
//day35.2- 100 days of code
// Rotate an array to the right by k positions.


#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    int temp[100];
    int i;

   
    k = k % n;

    
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

   
    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

   
    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[100], n, k, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    printf("Array after rotating right by %d positions:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
