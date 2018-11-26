#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a = (b = 3, b + 2);

    cout << a << endl;

    return 0;
}