// Question # 05: Write a program that read 10 numbers from user
// and display their sum, maximum and minimum number.

#include<iostream>
#include<climits>  // For INT_MIN and INT_MAX
using namespace std;

int main() {
    int numbers[10];
    int sum = 0;
    int maximum = INT_MIN;  // Start with smallest possible integer
    int minimum = INT_MAX;  // Start with largest possible integer
    
    cout << "Enter 10 numbers:" << endl;
    
    // Read 10 numbers from user
    for (int i = 0; i < 10; i++) {
        cout << "Number " << (i+1) << ": ";
        cin >> numbers[i];
        
        // Calculate sum
        sum += numbers[i];
        
        // Update maximum and minimum
        if (numbers[i] > maximum) {
            maximum = numbers[i];
        }
        if (numbers[i] < minimum) {
            minimum = numbers[i];
        }
    }
    
    // Display results
    cout << "\nResults:" << endl;
    cout << "Sum of all numbers: " << sum << endl;
    cout << "Maximum number: " << maximum << endl;
    cout << "Minimum number: " << minimum << endl;
    
    return 0;
}