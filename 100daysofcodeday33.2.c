
//day33.2- 100 days of code
//Insert an element in a sorted array at the appropriate position.


#include <stdio.h>

int main() {
    int arr[100], n, i, newElement, pos;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &newElement);

   
    for (i = 0; i < n; i++) {
        if (arr[i] > newElement) {
            break;
        }
    }
    pos = i;

    
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos] = newElement;
    n++;  

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
