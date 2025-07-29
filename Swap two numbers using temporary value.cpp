// swap two numbers with temp value
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swap";
    cout << "\na = " << a << " b = " << b;
    int temp = a;
    a = b;
    b = temp;
    cout << "\nAfter swap";
    cout << "\na = " << a << " b = " << b;

    return 0;
}
