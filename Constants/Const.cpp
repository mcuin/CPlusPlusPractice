#include <iostream>

using namespace std;

const double pi1 = 3.14159;
const char newline1 = '\n';

#define PI 3.14159
#define NEWLINE '\n'

int main() {
    double r = 5.0;
    double circle;

    circle = 2 * pi1 * r;
    cout << circle;
    cout << newline1;

    circle = 2 * PI * r;
    cout << circle;
    cout << NEWLINE;
}
