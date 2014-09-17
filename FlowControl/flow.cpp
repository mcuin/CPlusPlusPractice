#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    float num;
    cout << "Please enter a number: " << endl;
    cin >> num;
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero" << endl;
    }

    int n = 10;

    while (n > 0) {
        cout << n << ", ";
        n--;
    }
    cout << "liftoff!\n";

    string myStr;
    do {
        cout << "Enter text: ";
        getline(cin, myStr);
        cout << "You entered: " << myStr << ".\n";
    } while (myStr != "goodbye");

    for (int n = 10; n > 0; n--) {
        cout << n << ", ";
    }
    cout << "liftoff!\n";

    string str {"Hello!"};
    for (auto c : str) {
        std::cout << "[" << c << "]";
    }
    std::cout << "\n";

    for (int n = 10; n >  0; n--) {
        cout << n << ", ";
        if ( n == 3) {
            cout << "Countdown aborted!\n";
            break;
        }
    }

    for (int n = 10; n > 0; n--) {
        if (n == 5) continue;
        cout << n << ", ";
    }
    cout << "liftoff!\n";

    int o = 10;
    myLabel:
        cout << o << ", ";
        o--;
        if (o > 0) goto myLabel;
        cout << "liftoff!\n";

    int x;
    cout << "Please enter a number: ";
    cin >> x;
    switch(x) {
        case 1:
            cout << "x is 1";
            break;
        case 2:
            cout << "x is 2";
            break;
        case 3:
            cout << "x is 3";
            break;
        default:
            cout << "x is not 1, 2, or 3";
            break;
    }
}
