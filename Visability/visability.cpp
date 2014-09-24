#include <iostream>

using namespace std;

namespace foo {
    int value() {
        return 5;
    }
}

namespace bar {
    const double pi = 3.1416;
    double value() {
        return 2 * pi;
    }
}

namespace first {
    int a = 5;
    int b = 10;
}

namespace second {
    double a = 3.1416;
    double b = 2.7183;
}

int main() {
    int x = 10;
    int y = 20;

    {
        int x;
        x = 50;
        y = 50;
        cout << "Inner block variables:\n";
        cout << "x: " << x << "\n";
        cout << "y: " << y << "\n";
    }

    cout << "Outer block variables:\n";
    cout << "x: " << x << "\n";
    cout << "y: " << y << "\n";

    cout << foo::value() << "\n";
    cout << bar::value() << "\n";
    cout << bar::pi << "\n";

    using namespace first;
    using second::b;
    cout << a << "\n";
    cout << b << "\n";
    cout << first::b << "\n";
    cout << second::a << "\n";

    return 0;
}
