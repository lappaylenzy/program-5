//Program7 Modulus
#include <iostream>
using namespace std;

void getModulus() {
    int num, divisor;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the divisor: ";
    cin >> divisor;

    if (divisor == 0) {
        cout << "Error! Modulus by zero is not allowed." << endl;
    } else {
        cout << "Remainder: " << (num % divisor) << endl;
    }
}

int main() {
    getModulus();
    return 0;
}

