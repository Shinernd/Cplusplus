#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
        Rectangle();
        Rectangle (int, int);
        int area(void){return width*height;} // whu void? : no matter
};

Rectangle::Rectangle () {
    width = 5;
    height = 5;
}

Rectangle::Rectangle (int a, int b) {
    width = a;
    height = b;
}

int main() {
    Rectangle rect (3, 4);
    Rectangle rectb; // default constructor called
    // Rectangle rectc(); : function declaration, not an object declaration
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    return 0;
}