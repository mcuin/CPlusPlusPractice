#include <iostream>

using namespace std;

int operate (int a, int b) {
    return (a*b);
}

double operate (double a, double b) {
    return (a/b);
}

int sum (int a, int b) {
    return a + b;
}

double sum (double a, double b) {
    return a + b;
}

template <class T>
T sum(T a, T b) {
    T result;
    result = a + b;
    return result;
}

template <class U, class V>
bool areEqual(U a, V b) {
    return (a == b);
}

template <class X, int Y>
X fixedMultiply (X val) {
    return val * Y;
}

int main() {
    int x = 5, y = 2, k;
    double m = 5.5, n = 2.0, h;
    cout << operate (x, y) << "\n";
    cout << operate (m, n) << "\n";
    cout << sum (x, y) << "\n";
    cout << sum (m, n) << "\n";
    k = sum<int>(x, y);
    h = sum<double>(m, n);
    cout << k << "\n";
    cout << h << "\n";
    if (areEqual(10, 10.0)) {
        cout << "x and y are equal" << "\n";
    } else {
        cout << "x and y are not equal" << "\n";
    }
    cout << fixedMultiply<int, 2>(10) << "\n";
    cout << fixedMultiply<int, 3>(10) << "\n";
    return 0;
}
