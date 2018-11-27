#include <iostream>
using namespace std;

int main ()
{
    enum week {sun, mon, tue, wed, thu, fri, sat}; // sun == 0, mon == 1, tue == 2 ...
    //enum week {sun = 21, mon, tue = 34} : 21 - 22 - 34
    enum week day1;

    day1 = fri; // it's better than: day1 = 5;
    cout << day1 << endl;
    
    day1 = mon; // it's better than: day1 = 1;
    cout << day1 << endl;

    return 0;
}