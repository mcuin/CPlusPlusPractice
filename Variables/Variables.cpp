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


    return 0;
}
