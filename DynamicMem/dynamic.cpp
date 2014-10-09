#include <iostream>

using namespace std;

int main() {
    int m, n;
    int * p;

    cout << "How many numbers would you like to enter? ";
    cin >> m;
    p = new (nothrow) int[m];
    if (p == nullptr) {
        cout << "Error: memory could not be allocated";
    } else {
        for (n = 0; n < m; n++) {
            cout << "Enter number: ";
            cin >> p[n];
        }

        cout << "You have entered: ";
        for (n = 0; n < m; n++) {
            cout << p[n] << ", ";
        }

        delete[] p;
    }
}
