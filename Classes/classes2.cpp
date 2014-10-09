#include <iostream>

using namespace std;

class CVector{
    public:
        int x, y;
        CVector() {};
        CVector(int a, int b) : x(a), y(b) {}
};

class Dummy{
    public:
        static int n;
        Dummy(){
            n++;
        };
        ~Dummy(){
            n--;
        };
};

class myClass{
    public:
        int x;
        myClass(int val) : x(val) {};
        int get() {
            return x;
        }
};

int Dummy::n = 0;

CVector operator+ (const CVector& lhs, const CVector& rhs) {
    CVector temp;
    temp.x = lhs.x + rhs.x;
    temp.y = lhs.y + rhs.y;
    return temp;
}

/*bool Dummy::isItMe (Dummy& param) {
    if (&param == this) {
        return true;
    } else {
        return false;
    }
}*/

int main() {
    CVector foo(3, 1);
    CVector bar(1, 2);
    CVector result;
    result = foo + bar;
    cout << result.x << ", " << result.y << endl;

    Dummy a;
    /*Dummy* b = &a;
    if (b -> isItMe(a)) {
        cout << "yes, &a is b\n";
    }*/
    Dummy b[5];
    Dummy * c = new Dummy;

    cout << a.n << '\n';
    delete c;
    cout << Dummy::n << endl;

    const myClass foo2(10);
    cout << foo2.x << endl;

    return 0;
}
