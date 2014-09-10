#include <iostream>

using namespace std;

int main() {
    int a, b, result1;
    a = 5;
    b = 2;
    a = a + 1;
    result1 = a - b;

    int c = 5;
    int d = (3);
    int e = {2};
    int result2;
    c = c + d;
    result2 = c - e;

    cout << result2 << endl;
    cout << result1 << endl;

    int foo1 = 0;
    auto bar1 = foo1;
    cout << bar1 << endl;

    int foo2 = 0;
    decltype(foo2) bar2;
    cout << bar2 << endl;

}
