#include <iostream>
using namespace std;

class CVector {
    public:
        int x, y;
        CVector () {}
        CVector (int a, int b) : x(a), y(b) {}
        CVector & operator = (const CVector &); // Don't forget!
};

CVector operator + (const CVector & lhs, const CVector & rhs) {
    CVector temp;
    temp.x = lhs.x + rhs.x;
    temp.y = lhs.y + rhs.y;
    return temp;
}

// member functions that returns objects by reference, using "this"
CVector& CVector::operator = (const CVector & param) {
    x = param.x;
    y = param.y;
    return * this; // Why not return this?: 'this' is a pointer of class, type == CVector *
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