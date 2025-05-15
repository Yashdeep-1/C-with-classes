// Write a C++ program that asks the user to enter their name and age, then prints a greeting message with their name and age
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age,n;

    cout << "Enter your name: ";
    getline(cin, name); // Allows names with spaces

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello " << name << ", your age is " << age << "." << endl;

    return 0;
}
