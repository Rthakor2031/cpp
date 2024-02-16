#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    if (num1 == num2 || num3 == num1 || num2 == num3) {
        cout << "You entered numbers that are equal! Please enter numbers again." << endl;
    } else {
        if (num1 < num2) {
            if (num1 < num3) {
                cout << "Minimum number is: " << num1 << endl;
            } else {
                cout << "Minimum number is: " << num3 << endl;
            }
        } else {
            if (num2 < num3) {
                cout << "Minimum number is: " << num2 << endl;
            } else {
                cout << "Minimum number is: " << num3 << endl;
            }
        }
    }
    return 0;
}
