// Program 6: Division
#include <iostream>
using namespace std;
void divide() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
    } else {
        cout << "Quotient: " << static_cast<float>(a) / b << endl;
    }
}
int main() {
    divide();
    return 0;
}