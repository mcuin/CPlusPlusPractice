#include <iostream>

using namespace std;

int foo[] = {16, 2, 40, 77, 12071};
int n, result = 0;

void printarray (int arg[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << arg[i] << ' ';
    }
    cout << '\n';
}

int main() {
    int bar[5] = {10, 20, 30};
    int baz[5] = {};

    for (n = 0; n < 5; ++n) {
        result += foo[n];
    }

    cout << result << endl;

    int firstArray[] = {5, 10, 15};
    int secondArray[] = {2, 4, 6, 8, 10};

    printarray(firstArray, 3);
    printarray(secondArray, 5);
    return 0;
}
