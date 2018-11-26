#include <iostream>
using namespace std;

int main()
{
    int foo = 2;
    auto firbar = foo; //the same as: int firbar = foo;
    decltype(foo) secbar = 1; //the same as: int secbar;

    cout << foo << endl;
    cout << firbar << endl;
    cout << secbar << endl;

    return 0;
}