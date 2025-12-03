// Question # 04: Write a program that takes two numbers from user.
// Find if the first number is multiple of second number or not.

#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    
    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    // Check if first number is multiple of second number
    if (num2 != 0 && num1 % num2 == 0) {
        cout << num1 << " is a multiple of " << num2 << endl;
        cout << num2 << " is a factor of " << num1 << endl;
    } else if (num1 != 0 && num2 % num1 == 0) {
        cout << num2 << " is a multiple of " << num1 << endl;
        cout << num1 << " is a factor of " << num2 << endl;
    } else {
        cout << "Neither number is a multiple of the other" << endl;
    }
    
    return 0;
}