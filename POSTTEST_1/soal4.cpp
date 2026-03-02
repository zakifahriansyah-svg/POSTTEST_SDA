#include <iostream>
using namespace std;

void tukar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 100;
    int y = 250;

    cout << "===========================" << endl;
    cout << "          SOAL 4   " << endl;
    cout << "===========================" << endl;

    cout << "\nNilai SEBELUM pertukaran:" << endl;
    cout << "  x = " << x << endl;
    cout << "  y = " << y << endl;

    cout << "\nAlamat memori:" << endl;
    cout << "  Alamat x : " << &x << endl;
    cout << "  Alamat y : " << &y << endl;

    tukar(&x, &y);

    cout << "\nNilai SESUDAH pertukaran:" << endl;
    cout << "  x = " << x << endl;
    cout << "  y = " << y << endl;

    cout << "--------------------------------------------" << endl;
    cout << "Alamat memori tidak berubah (hanya nilainya):" << endl;
    cout << "  Alamat x : " << &x << endl;
    cout << "  Alamat y : " << &y << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}