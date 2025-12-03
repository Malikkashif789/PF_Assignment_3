// Question # 03: Write a program that read height in inches.
// And display the height in feet and inches.

#include<iostream>
using namespace std;

int main() {
    int heightInches;
    
    // Read height in inches
    cout << "Enter height in inches: ";
    cin >> heightInches;
    
    // Calculate feet and inches
    int feet = heightInches / 12;  // 1 foot = 12 inches
    int inches = heightInches % 12;
    
    // Display result
    cout << "Height: " << feet << " feet and " << inches << " inches" << endl;
    
    return 0;
}