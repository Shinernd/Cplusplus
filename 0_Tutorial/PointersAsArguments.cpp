#include <iostream>
using namespace std;

void increment_all (int* start, int* stop)
{
    int* current = start;
    while (current != stop)
    {
        ++(*current); // increment value pointed
        ++current; // increment pointer
    }
}

/*
*p++   // same as *(p++): increment pointer, and dereference unincremented address
*++p   // same as *(++p): increment pointer, and dereference incremented address
++*p   // same as ++(*p): dereference pointer, and increment the value it points to
(*p)++ // dereference pointer, and post-increment the value it points to
*/

void print_all (const int* start, const int* stop)
{
    const int* current = start;
    while (current != stop)
    {
        cout << *current << endl;
        ++current; // increment pointer
    }
}

/*
int x;
      int *       p1 = &x;  // non-const pointer to non-const int
const int *       p2 = &x;  // non-const pointer to const int
int const *       p2 = &x;  // also non-const pointer to const int
      int * const p3 = &x;  // const pointer to non-const int
const int * const p4 = &x;  // const pointer to const int
*/

int main()
{
    int numbers[] = {10, 20, 30};
    
    increment_all (numbers, numbers + 3);
    print_all (numbers, numbers + 3);

    return 0;
}