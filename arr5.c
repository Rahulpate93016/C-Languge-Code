#include <stdio.h>

int countodd(int arr[], int n);  // Declaration with 'int' since it returns an integer

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];  // Declare an array with size 'n'
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input elements into the array
    }

    printf("Number of odd elements: %d\n", countodd(arr, n));  // Call the function and print the result

    return 0;
}

int countodd(int arr[], int n) {  // Function definition with 'int'
    int count = 0;  // Initialize count variable
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {  // Check if the element is odd
            count++;  // Increment count if the element is odd
        }
    }
    return count;  // Return the count of odd numbers
}
