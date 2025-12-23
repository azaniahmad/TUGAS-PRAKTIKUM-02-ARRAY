#include <iostream>
using namespace std;

int main() {
    int pilih;
    
    do {
        cout << "\n==== PROGRAM MATRIKS ====\n";
        cout << "1. Tambah Matriks\n";
        cout << "2. Kali Matriks\n";
        cout << "3. Demo sizeof\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;
        
        if (pilih == 1) {
            // Penjumlahan Matriks
            int A[3][3], B[3][3], C[3][3];
            
            cout << "\nMatriks A (3x3):\n";
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << "A[" << i << "][" << j << "]: ";
                    cin >> A[i][j];
                }
            }
            
            cout << "\nMatriks B (3x3):\n";
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << "B[" << i << "][" << j << "]: ";
                    cin >> B[i][j];
                }
            }
            
            // Hitung A + B
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    C[i][j] = A[i][j] + B[i][j];
                }
            }
            
            // Tampilkan hasil
            cout << "\nMatriks A:\n";
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << A[i][j] << " ";
                }
                cout << "\n";
            }
            
            cout << "\nMatriks B:\n";
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << B[i][j] << " ";
                }
                cout << "\n";
            }
            
            cout << "\nHasil A + B:\n";
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << C[i][j] << " ";
                }
                cout << "\n";
            }
        }
        else if (pilih == 2) {
            // Perkalian Matriks
            int A[3][3], B[3][3], C[3][3];
            
            cout << "\nMatriks A (3x3):\n";
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << "A[" << i << "][" << j << "]: ";
                    cin >> A[i][j];
                }
            }
            
            cout << "\nMatriks B (3x3):\n";
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << "B[" << i << "][" << j << "]: ";
                    cin >> B[i][j];
                }
            }
            
            // Hitung A x B
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    C[i][j] = 0;
                    for (int k = 0; k < 3; k++) {
                        C[i][j] += A[i][k] * B[k][j];
                    }
                }
            }
            
            // Tampilkan hasil
            cout << "\nMatriks A:\n";
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << A[i][j] << " ";
                }
                cout << "\n";
            }
            
            cout << "\nMatriks B:\n";
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << B[i][j] << " ";
                }
                cout << "\n";
            }
            
            cout << "\nHasil A x B:\n";
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << C[i][j] << " ";
                }
                cout << "\n";
            }
        }
        else if (pilih == 3) {
            // Demo sizeof
            cout << "\n=== Demo sizeof ===\n";
            
            int arr1[] = {10, 20, 30, 40, 50};
            double arr2[] = {1.5, 2.5, 3.5, 4.5};
            char arr3[] = {'A', 'B', 'C', 'D', 'E', 'F'};
            
            int panjang1 = sizeof(arr1) / sizeof(arr1[0]);
            int panjang2 = sizeof(arr2) / sizeof(arr2[0]);
            int panjang3 = sizeof(arr3) / sizeof(arr3[0]);
            
            cout << "\nArray int: ";
            for (int i = 0; i < panjang1; i++) {
                cout << arr1[i] << " ";
            }
            cout << "\nTotal: " << sizeof(arr1) << " bytes";
            cout << "\nPer elemen: " << sizeof(arr1[0]) << " bytes\n";
            
            cout << "\nArray double: ";
            for (int i = 0; i < panjang2; i++) {
                cout << arr2[i] << " ";
            }
            cout << "\nTotal: " << sizeof(arr2) << " bytes";
            cout << "\nPer elemen: " << sizeof(arr2[0]) << " bytes\n";
            
            cout << "\nArray char: ";
            for (int i = 0; i < panjang3; i++) {
                cout << arr3[i] << " ";
            }
            cout << "\nTotal: " << sizeof(arr3) << " bytes";
            cout << "\nPer elemen: " << sizeof(arr3[0]) << " bytes\n";
            
            cout << "\nRumus: panjang = sizeof(array) / sizeof(array[0])\n";
        }
        else if (pilih == 0) {
            cout << "\nTerima kasih!\n";
        }
        else {
            cout << "\nPilihan salah!\n";
        }
        
    } while (pilih != 0);
    
    return 0;
}
