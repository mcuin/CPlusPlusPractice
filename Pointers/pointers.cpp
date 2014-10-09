#include <iostream>

using namespace std;

void incrementAll(int* start, int* stop) {
    int * current = start;
    while (current != stop) {
        ++(*current);
        ++current;
    }
}

void printAll(const int* start, const int *stop) {
    const int * current = start;
    while (current != stop) {
        cout << *current << endl;
        ++current;
    }
}

void increase(void* data, int psize) {
    if (psize == sizeof(char)) {
        char* pchar;
        pchar = (char*)data;
        ++(*pchar);
    } else if (psize == sizeof(int)) {
        int* pint;
        pint = (int*)data;
        ++(*pint);
    }
}

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int operation(int x, int y, int (*funcToCall)(int, int)) {
    int g;
    g = (*funcToCall)(x, y);
    return g;
}

int main() {

    int first, second;
    int * myPointer;

    myPointer = &first;
    *myPointer = 10;
    myPointer = &second;
    *myPointer = 20;

    cout << "First value is: " << first << endl;
    cout << "Second value is: " << second << endl;

    int first2 = 5, second2 = 15;
    int * p1, * p2;

    p1 = &first2;
    p2 = &second2;

    *p1 = 10;
    *p2 = *p1;
    p1 = p2;
    *p1 = 20;

    cout << "First value is: " << first2 << endl;
    cout << "Second value is: " << second2 << endl;

    int number[5];
    int * p;

    p = number;
    *p = 10;
    p++;
    *p = 20;
    p = &number[2];
    *p = 30;
    p = number + 3;
    *p = 40;
    p = number;
    *(p+4) = 50;

    for (int i = 0; i < 5; i++) {
        cout << number[i] << endl;
    }

    int numbers[] = {10, 20, 30};
    incrementAll(numbers, numbers+3);
    printAll(numbers, numbers+3);

    char a = 'x';
    int b = 1062;

    increase(&a, sizeof(a));
    increase(&b, sizeof(b));

    cout << a << ", " << b << endl;

    int m, n;
    int (*minus)(int, int) = subtraction;

    m = operation (7, 5, addition);
    n = operation (20, m, minus);
    cout << n << endl;

    return 0;
}
