// Program 1: Get and Display User Name
#include <iostream>
#include <string>
using namespace std;
void getUserName() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;
}
int main() {
    getUserName();
    return 0;
}