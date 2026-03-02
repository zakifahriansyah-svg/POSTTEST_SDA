#include <iostream>
using namespace std;

void tampilkanArray(int* arr, int n) {
    int* p = arr;
    while (p < arr + n) {
        cout << "  Nilai: " << *p << "\t Alamat: " << p << endl;
        p++;
    }
}

void reverseArray(int* arr, int n) {
    int* depan = arr;
    int* belakang = arr + n - 1;

    while (depan < belakang) {
        int temp = *depan;
        *depan = *belakang;
        *belakang = temp;
        depan++;
        belakang--;
    }
}

int main() {
    int prima[7] = {2, 3, 5, 7, 11, 13, 17};
    int n = 7;

    cout << "===========================" << endl;
    cout << "          SOAL 3   " << endl;
    cout << "===========================" << endl;

    cout << "\nArray SEBELUM dibalik:" << endl;
    cout << "------------------------------------" << endl;
    tampilkanArray(prima, n);

    reverseArray(prima, n);

    cout << "\nArray SESUDAH dibalik:" << endl;
    cout << "------------------------------------" << endl;
    tampilkanArray(prima, n);

    cout << "------------------------------------" << endl;

    return 0;
}