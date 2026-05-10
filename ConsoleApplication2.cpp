#include <iostream>
using namespace std;

int main() {
    const int size = 5;

    int* array = new int[size];
    int doubled[size];

    cout << "Enter 5 array elements:" << endl;

    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> *(array + i);
    }

    cout << endl;

    cout << "Initial array:" << endl;
    for (int* p = array; p < array + size; p++) {
        cout << *p << " ";
    }

    cout << endl << endl;

    cout << "Doubled values:" << endl;
    for (int i = 0; i < size; i++) {
        doubled[i] = *(array + i) * 2;
        cout << doubled[i] << " ";
    }

    cout << endl << endl;

    int positiveCount = 0;

    for (int* p = array; p < array + size; p++) {
        if (*p > 0) {
            positiveCount++;
        }
    }

    cout << "Number of positive elements = " << positiveCount << endl;

    int q = *(array + 4);
    cout << "Fifth element copied to q: q = " << q << endl;

    *(array + 4) = 1000;

    cout << "Array after replacing fifth element with 1000:" << endl;
    for (int* p = array; p < array + size; p++) {
        cout << *p << " ";
    }

    cout << endl;

    delete[] array;

    return 0;
}
