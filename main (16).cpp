// Program 2: Get Two Numbers
#include <iostream>
using namespace std;
void getNumbers() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "You entered: " << num1 << " and " << num2 << endl;
}
int main() {
    getNumbers();
    return 0;
}