#include <iostream>
using namespace std;

class CVector {
    public:
        int x, y;
        // functions name CVector
        CVector () {};
        CVector (int a, int b) : x(a), y(b) {}
        // function that returns a CVector
        CVector operator + (const CVector&); // type operator sign (parameters) {...body...}
};

CVector CVector::operator + (const CVector& param) {
    CVector temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return temp;
}

int main() {
    CVector foo (3, 1);
    CVector bar (1, 2);
    CVector result;
    result = foo + bar; // same as: result = foo.operator+(bar)
    cout << result.x << ',' << result.y << endl;
    return 0;
}