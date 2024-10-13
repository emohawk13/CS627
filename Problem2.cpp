#include <iostream>
using namespace std;

// Function to reverse an array in place
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        // Swap elements
        int temp = arr[start]; // 1 step
        arr[start] = arr[end]; // 1 step
        arr[end] = temp; // 1 step
        
        start++; // 1 step
        end--; // 1 step
    }
    // Total steps: 5 * (n / 2) = (5n / 2)
}

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; // 1 step
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) { // 1 step
                // Swap
                int temp = arr[j]; // 1 step
                arr[j] = arr[j + 1]; // 1 step
                arr[j + 1] = temp; // 1 step
                swapped = true; // 1 step
            }
        }
        if (!swapped) break; // Early exit if sorted
    }
    // Total steps: 2(n^2 - n)
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Newline
}

int main() {
    // Sample array
    int arr[] = {1, 5, 9, 15, 26, 45, 1, 96, 43};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    reverseArray(arr, n);
    cout << "Reversed array: ";
    printArray(arr, n);

    bubbleSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);

    // Time Complexity: O(n^2)
    // Space Complexity: O(1)

    return 0;
}
