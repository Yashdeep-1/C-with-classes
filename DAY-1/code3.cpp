// Write a program to display the upper and lower limits of different integer data types in C++.

#include <iostream>
#include <climits>
using namespace std;

int main() {
    cout << "int: " << INT_MIN << " to " << INT_MAX << endl;

    cout << "short: " << SHRT_MIN << " to " << SHRT_MAX << endl;
    
    cout << "long: " << LONG_MIN << " to " << LONG_MAX << endl;
    
    cout << "unsigned int: 0 to " << UINT_MAX << endl;
    
    return 0;
}