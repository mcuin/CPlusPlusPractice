#include <iostream>

using namespace std;

int addition (int a, int b) {
    int r = a + b;
    return r;
}

int subtraction (int a, int b) {
    int r = a - b;
    return r;
}

int main() {
    int x, y, z;
    cout << "Please enter two numbers: ";
    cin >> x >> y;
    z = addition(x, y);
    cout << "The addition result is: " << z << "\n";
    cout << "The subtraction result is: " << subtraction(x, y) << "\n";
    z = 4 + subtraction(x, y);
    cout << "This is the subtraction result adding 4: " << z << "\n";
}
