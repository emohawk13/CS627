#include <iostream>
using namespace std;

// Function to reverse an array in place
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        // Swap the elements at the start and end pointers
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers closer to the center
        start++;
        end--;
    }
}

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Track if a swap was made
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap if the element is greater than the next element
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // If no swaps were made, the array is sorted
        if (!swapped) break;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Print a newline for better output formatting
}

int main() {
    //  Array
    int arr[] = {1, 5, 9, 15, 26, 45, 1, 96, 43};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    cout << "Original array: ";
    printArray(arr, n); // Print the original array

    // Call the reverse function
    reverseArray(arr, n);
    cout << "Reversed array: ";
    printArray(arr, n); // Print the reversed array

    // Sort the array using bubble sort
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n); // Print the sorted array

    return 0; // Indicate that the program ended successfully
}
