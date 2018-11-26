// NTCS : null-terminated character sequences

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char myntcs[] = "some text"; // c-string (NTCS)
    string mystring = myntcs; // convert c-string to (library) string
    cout << mystring << endl; // printed as a library string
    cout << mystring.c_str() << endl; // printed as a c-string

    return 0;
}