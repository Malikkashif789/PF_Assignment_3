// Question # 06: Write a program to sort an array in ascending order using functions in C++

#include<iostream>
using namespace std;

// Function prototypes
void inputArray(int arr[], int size);
void printArray(int arr[], int size);
void sortArray(int arr[], int size);
void swap(int &a, int &b);

int main() {
    const int SIZE = 10;  // You can change this size as needed
    int arr[SIZE];
    
    cout << "=== Array Sorting Program ===\n" << endl;
    
    // Input array from user
    cout << "Enter " << SIZE << " integers:" << endl;
    inputArray(arr, SIZE);
    
    // Display original array
    cout << "\nOriginal array: ";
    printArray(arr, SIZE);
    
    // Sort the array
    sortArray(arr, SIZE);
    
    // Display sorted array
    cout << "Sorted array (ascending order): ";
    printArray(arr, SIZE);
    
    return 0;
}

// Function to input array elements
void inputArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << "Element " << i+1 << ": ";
        cin >> arr[i];
    }
}

// Function to print array elements
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i];
        if(i < size-1) cout << ", ";
    }
    cout << endl;
}

// Function to swap two elements
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to sort array in ascending order using Bubble Sort
void sortArray(int arr[], int size) {
    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}