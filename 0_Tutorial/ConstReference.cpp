#include <iostream>
using namespace std;

string concatenate (const string& a, const string& b)
{
    return a+b;
}

int main()
{
    string x {"Hi, "};
    string y {"hello."};

    cout << concatenate(x, y) << endl;

    return 0;
}