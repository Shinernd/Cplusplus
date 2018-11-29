#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
        Rectangle (int x, int y) : width(x), height(y) {}
        int area(void) {return width*height;}
};

int main()
{
    Rectangle *foo, *bar, *baz;
    
    Rectangle obj (3, 4);
    foo = &obj;
    bar = new Rectangle (5, 6);
    baz = new Rectangle[2] {{2, 5}, {3, 6}};

    cout << "obj's: " << obj.area() << endl;
    cout << "*foo's: " << foo->area() << endl;
    cout << "*bar's: " << bar->area() << endl;
    cout << "baz[0]'s: " << baz[0].area() << endl;
    cout << "baz[1]'s: " << baz[1].area() << endl;

    delete bar;
    delete[] baz;

    return 0;
}