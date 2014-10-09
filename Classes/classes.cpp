#include <iostream>

using namespace std;

class Rectangle{
        int height, width;
        public:
            Rectangle();
            Rectangle(int, int);
            int area (){
                return width * height;
            }
};

class Circle{
    double radius;
    public:
        Circle(double r) {
            radius = r;
        }
        double cirum() {
            return 2 * radius * 3.14;
        }
        double area() {
            return radius * radius * 3.14;
        }
};

class Cylinder{
    Circle base;
    double height;
    public:
        Cylinder(double r, double h) : base(r), height(h) {}
        double volume() {
            return base.area() * height;
        }
};

Rectangle::Rectangle() {
    height = 5;
    width = 5;
}

Rectangle::Rectangle(int a, int b) {
    height = a;
    width = b;
}

int main() {
    Rectangle recta(3, 4);
    Rectangle rectb;
    cout << recta.area() << endl;
    cout << rectb.area() << endl;

    Circle foo(10.0);
    Circle bar = 20.0;
    Circle baz{30.0};
    Circle qux = {40.0};

    cout << baz.cirum() << endl;

    Cylinder foo2(10, 20);

    cout << foo2.volume() << endl;

    Rectangle obj(4, 3);
    Rectangle * foo3, * bar2, * baz2;

    foo3 = &obj;
    bar2 = new Rectangle(5, 6);
    baz2 = new Rectangle[2]{ {2, 5}, {3, 6} };

    cout << "Obj area: " << obj.area() << endl;
    cout << "foo3 area: " << foo3->area() << endl;
    cout << "bar2 area: " << bar2->area() << endl;
    cout << "baz1 area: " << baz2[0].area() << endl;
    cout << "baz2 area: " << baz2[1].area() << endl;

    delete bar2;
    delete[] baz2;
}
