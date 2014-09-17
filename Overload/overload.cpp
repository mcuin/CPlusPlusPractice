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

int main() {
    int x = 5, y = 2;
    double m = 5.0, n = 2.0;
    cout << operate (x, y) << "\n";
    cout << operate (m, n) << "\n";
    cout << sum (x, y) << "\n";
    cout << sum (m, n) << "\n";
    return 0;
}
