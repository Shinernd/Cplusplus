#include <iostream>
using namespace std;

class MyClass {
    int x;
    public:
        MyClass (int val) : x(val) {}
        const int& get() const {return x;}
};

void print (const MyClass& arg) { // better to write 'const'
    cout << arg.get() << endl;
}

int main() {
    MyClass foo (10);
    print(foo);

    return 0;
}