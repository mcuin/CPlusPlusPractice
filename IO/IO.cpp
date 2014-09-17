#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int i;
    cout << "Please enter an integer value: ";
    cin >> i;
    cout << "The value you entered is: " << i << endl;
    cout << "The value multiplied by 2 is: " << i * 2 << endl;

    string myStr;
    cout << "What's your name? ";
    getline(cin, myStr);
    cout << "Hello" << myStr << ".\n";
    cout << "What is your favorite food? ";
    getline(cin, myStr);
    cout << "I like " << myStr << " too!\n";

    float price = 0;
    int quantity = 0;
    cout << "Enter price: ";
    getline(cin, myStr);
    stringstream(myStr) >> price;
    cout << "Enter quantity: ";
    getline(cin, myStr);
    stringstream(myStr) >> quantity;
    cout << "The price is: " << price * quantity << endl;
    return 0;
}
