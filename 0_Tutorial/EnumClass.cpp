// error: no match for ‘operator<<’ (operand types are ‘std::ostream {aka std::basic_ostream}’ and ‘main()::Colors’)
// error: cannot bind ‘std::ostream {aka std::basic_ostream}’ lvalue to ‘std::basic_ostream&&’

// a scoped enumeration ISN'T implicitly convertible to its integer value: need to explicitly convert it to an integer USING a CAST

#include <iostream>
using namespace std;

int main()
{
    enum class Colors {black, blue, green, cyan, red, purple, yellow, white};

    Colors mycolor = Colors::blue;
    cout << mycolor <<endl;

    // a distinct type
    enum class Eyecolor : char {blue, green, brown};
    Eyecolor myeyecolor;
    
    myeyecolor = Colors::blue;
    cout << myeyecolor << endl;

    return 0;
}