#include <iostream>
#include <chrono>
#include <vector>
#include <cstdlib> // For rand()
#include <fstream> // For file output
using namespace std;
using namespace std::chrono;

// Function to reverse an array in place
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

// Function to measure the runtime of an algorithm
double measureRuntime(void (*func)(int[], int), int arr[], int n) {
    auto start = high_resolution_clock::now();
    func(arr, n);
    auto end = high_resolution_clock::now();
    duration<double> duration = end - start;
    return duration.count(); // Returns time in seconds
}

// Function to generate a random array
void generateRandomArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10000; // Random numbers between 0 and 9999
    }
}

// Main function
int main() {
    const int sizes[] = {500, 1500, 2500, 10000}; // Different sizes of arrays
    std::ofstream outFile("runtime_data.csv");
    outFile << "Array Size,Runtime (seconds)\n"; // Write the header

    for (int n : sizes) {
        int* arr = new int[n]; // Dynamically allocate an array
        generateRandomArray(arr, n); // Fill the array with random numbers

        // Measure runtime of bubble sort
        double runtime = measureRuntime(bubbleSort, arr, n);
        cout << "Runtime for n = " << n << ": " << runtime << " seconds" << endl;
        outFile << n << "," << runtime << "\n"; // Write data to file

        delete[] arr; // Clean up allocated memory
    }

    outFile.close(); // Close the file
    return 0; // Show that the program ended successfully
}