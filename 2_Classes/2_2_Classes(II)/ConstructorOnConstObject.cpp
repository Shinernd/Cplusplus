#include <iostream>
using namespace std;

class MyClass {
    public:
        int x;
        MyClass(int val) : x(val) {}
        int get() {return x;}
};

int main() {
    const MyClass foo(10);
    // foo.x = 20;         // not valid: x cannot be modified
    cout << foo.x << endl; // ok: data member x can be read (read only)
    return 0;
}

/*
int get () const {return x;}       // const member function
const int& get() {return x;}       // member function returning a const&
const int& get() const {return x;} // const member function returning a const&
*/