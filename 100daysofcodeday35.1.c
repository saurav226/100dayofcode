

//day35.1- 100 days of code
// Find the second largest element in an array.


#include <stdio.h>
#include <limits.h>  

int main() {
    int arr[100], n, i;
    int largest, secondLargest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = INT_MIN;

    for(i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("There is no second largest element (all elements might be equal).\n");
    } else {
        printf("The second largest element is %d\n", secondLargest);
    }

    return 0;
}
