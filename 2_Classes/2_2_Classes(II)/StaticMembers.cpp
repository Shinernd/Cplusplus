#include <iostream>
using namespace std;

class Dummy {
    public:
        static int n; // objects share the same value
        Dummy () { n++; };
};

int Dummy::n = 0; // need to declared somewhere outside the class to avoid to be declared several times

int main () {
    Dummy a; // n == 1
    Dummy b[5]; // n == 6
    cout << a.n << endl;

    Dummy * c = new Dummy; // n == 7
    cout << Dummy::n << endl;

    delete c;
    return 0;
}