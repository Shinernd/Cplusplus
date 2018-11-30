#include <iostream>
using namespace std;

class CVector {
    public:
        int x, y;
        CVector () {}
        CVector (int a, int b) : x(a), y(b) {}
};

CVector operator + (const CVector & lhs, const CVector & rhs) {
    CVector temp;
    temp.x = lhs.x + rhs.x;
    temp.y = lhs.y + rhs.y;
    return temp;
}

// ??
CVector& CVector::operator = (const CVector& param) {
    x = param.x;
    y = param.y;
    return * this;
}

int main () {
    CVector foo (3,1);
    CVector bar (1,2);
    CVector result1, result2;
    result1 = foo + bar;
    result2 = foo;
    cout << result1.x << ',' << result1.y << endl;
    cout << result2.x << ',' << result2.y << endl;
    return 0;
}