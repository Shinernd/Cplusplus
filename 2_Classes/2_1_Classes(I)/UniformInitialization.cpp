#include <iostream>
using namespace std;

class Circle {
    double radius;
    public:
        Circle (double r) { radius = r; }
        double circum() { return 2*radius*3.14159265; }
};

int main ()
{
    Circle foo (10.0); // functional form
    Circle bar = 20.0; // assignment init
    Circle baz {30.0}; // uniform init
    Circle qux = {40.0}; // POD-like (Plaing Old Data)

    cout << "foo's: " << foo.circum() << endl;
    cout << "bar's: " << bar.circum() << endl;
    cout << "baz's: " << baz.circum() << endl;
    cout << "qux's: " << qux.circum() << endl;

    return 0;
}