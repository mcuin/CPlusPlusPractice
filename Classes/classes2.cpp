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
        bool isItMe(Dummy& param);
};

CVector operator+ (const CVector& lhs, const CVector& rhs) {
    CVector temp;
    temp.x = lhs.x + rhs.x;
    temp.y = lhs.y + rhs.y;
    return temp;
}

bool Dummy::isItMe (Dummy& param) {
    if (&param == this) {
        return true;
    } else {
        return false;
    }
}

int main() {
    CVector foo(3, 1);
    CVector bar(1, 2);
    CVector result;
    result = foo + bar;
    cout << result.x << ", " << result.y << endl;

    Dummy a;
    Dummy* b = &a;
    if (b -> isItMe(a)) {
        cout << "yes, &a is b\n";
    }

    return 0;
}
