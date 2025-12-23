#include <iostream>
using namespace std;

const int SIZE = 3;

void printMatrix(int mat[SIZE][SIZE], string label) {
    cout << label << ":\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
}

void inputMatrix(int mat[SIZE][SIZE], string label) {
    cout << "Input " << label << " (" << SIZE << "x" << SIZE << "):\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << "[" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
}

void addMatrix() {
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];

    cout << "\n=== MATRIX ADDITION ===\n";
    inputMatrix(A, "Matrix A");
    inputMatrix(B, "Matrix B");

    // A + B = C
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\n";
    printMatrix(A, "Matrix A");
    cout << "\n";
    printMatrix(B, "Matrix B");
    cout << "\n";
    printMatrix(C, "Result (A + B)");
}

void multiplyMatrix() {
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE] = { 0 };

    cout << "\n=== MATRIX MULTIPLICATION ===\n";
    inputMatrix(A, "Matrix A");
    inputMatrix(B, "Matrix B");

    // A × B = C
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\n";
    printMatrix(A, "Matrix A");
    cout << "\n";
    printMatrix(B, "Matrix B");
    cout << "\n";
    printMatrix(C, "Result (A × B)");
}

void sizeofDemo() {
    cout << "\n=== sizeof() DEMONSTRATION ===\n";

    int arrInt[] = { 10, 20, 30, 40, 50 };
    double arrDouble[] = { 1.5, 2.5, 3.5, 4.5 };
    char arrChar[] = { 'A', 'B', 'C', 'D', 'E', 'F' };
    int matrix[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

    int lenInt = sizeof(arrInt) / sizeof(arrInt[0]);
    int lenDouble = sizeof(arrDouble) / sizeof(arrDouble[0]);
    int lenChar = sizeof(arrChar) / sizeof(arrChar[0]);
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    cout << "\nint array[" << lenInt << "]: ";
    for (int i = 0; i < lenInt; i++) cout << arrInt[i] << " ";
    cout << "\n  Total: " << sizeof(arrInt) << " bytes | Per element: "
        << sizeof(arrInt[0]) << " bytes\n";

    cout << "\ndouble array[" << lenDouble << "]: ";
    for (int i = 0; i < lenDouble; i++) cout << arrDouble[i] << " ";
    cout << "\n  Total: " << sizeof(arrDouble) << " bytes | Per element: "
        << sizeof(arrDouble[0]) << " bytes\n";

    cout << "\nchar array[" << lenChar << "]: ";
    for (int i = 0; i < lenChar; i++) cout << arrChar[i] << " ";
    cout << "\n  Total: " << sizeof(arrChar) << " bytes | Per element: "
        << sizeof(arrChar[0]) << " bytes\n";

    cout << "\nMatrix[" << rows << "][" << cols << "]:\n";
    for (int i = 0; i < rows; i++) {
        cout << "  ";
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "  Total elements: " << rows * cols << "\n";

    cout << "\nFormula: length = sizeof(array) / sizeof(array[0])\n";
}

int main() {
    int choice;

    do {
        cout << "\n================================\n";
        cout << "  MATRIX & ARRAY OPERATIONS\n";
        cout << "================================\n";
        cout << "1. Matrix Addition (3x3)\n";
        cout << "2. Matrix Multiplication (3x3)\n";
        cout << "3. sizeof() Demo\n";
        cout << "0. Exit\n";
        cout << "================================\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
        case 1: addMatrix(); break;
        case 2: multiplyMatrix(); break;
        case 3: sizeofDemo(); break;
        case 0: cout << "\nExiting...\n"; break;
        default: cout << "\nInvalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}