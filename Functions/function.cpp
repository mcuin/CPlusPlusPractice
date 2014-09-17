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

void printFunc(void) {
    cout << "I'm running as a function.";
}

void duplicate(int& a, int& b, int& c) {
    a *= 2;
    b *= 2;
    c *= 2;
}

int divide(int a, int b = 2) {
    int r = a/b;
    return r;
}

void odd (int x);
void even (int x);

long factorial (long a) {
    if (a > 1) {
        return (a * factorial (a - 1));
    } else {
        return 1;
    }
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

    printFunc();

    int h = 1, j = 3, i = 7;
    duplicate(h, i, j);
    cout << "h = " << h << " j = " << j << " i = " << i << "\n";

    cout << divide(12) << "\n";
    cout << divide(20, 4) << "\n";

    int m;
    do {
        cout << "Please enter a number: ";
        cin >> m;
        odd(m);
    } while (m != 0);

    long num = 9;
    cout << num << "! = " << factorial(num);

    return 0;
}

void odd (int x) {
    if ((x % 2) != 0) {
        cout << "Number is odd" << "\n";
    } else {
        even(x);
    }
}

void even (int x) {
    if ((x % 2) == 0) {
        cout << "Number is even" << "\n";
    } else {
        odd(x);
    }
}
