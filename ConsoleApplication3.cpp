#include <iostream>
#include <iomanip>
using namespace std;

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(4) << *(*(matrix + i) + j);
        }
        cout << endl;
    }
}

int main() {
    int rows;
    int cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int** matrix = new int* [rows];

    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    cout << "Enter matrix elements:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> *(*(matrix + i) + j);
        }
    }

    cout << endl;

    cout << "Initial matrix:" << endl;
    printMatrix(matrix, rows, cols);

    int* maxPointer = &matrix[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (*(*(matrix + i) + j) > *maxPointer) {
                maxPointer = (*(matrix + i) + j);
            }
        }
    }

    cout << endl;
    cout << "Maximum element = " << *maxPointer << endl;

    cout << endl;
    cout << "Matrix addresses and values:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Address: " << (*(matrix + i) + j)
                << " Value: " << *(*(matrix + i) + j) << endl;
        }
    }

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }

    delete[] matrix;

    return 0;
}
