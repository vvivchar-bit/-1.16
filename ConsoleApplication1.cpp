#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;

    int* p1 = &x;
    int* p2 = &y;

    cout << "Initial values:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    cout << endl;

    *p1 = *p2;
    cout << "After operation *p1 = *p2:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    cout << endl;

    p2 = &x;
    *p2 = y + 5;

    cout << "After operation p2 = &x and *p2 = y + 5:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    cout << endl;

    void* universalPointer = &x;
    cout << "Void pointer stores address of x: " << universalPointer << endl;

    return 0;
}
