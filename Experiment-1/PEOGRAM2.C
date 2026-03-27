/*Q1) Write a program to create an UDF for input 10 numbers into a 1D array.
Create two functions MAX() and MIN(). MAX() is used to return the largest
element and MIN() is used to return the smallest number in array. */
#include <stdio.h>

// Function to find maximum element
int MAX(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find minimum element
int MIN(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[10];

    // Input 10 numbers
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Calling functions
    int max = MAX(arr, 10);
    int min = MIN(arr, 10);

    // Output
    printf("Maximum number = %d\n", max);
    printf("Minimum number = %d\n", min);

    return 0;
}
