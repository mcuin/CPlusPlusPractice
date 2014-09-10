#include <iostream>

using namespace std;

int main() {
    int a, b;
    a = 10;
    b = 4;
    a = b;
    b = 7;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    int c, d = 3;
    c = d;
    c += d;
    cout << d << endl;

    int e = 2;
    int f = 7;

    c = (e > f) ? e : f;
    cout << c << '\n';

    return 0;
}
