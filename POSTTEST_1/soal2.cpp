#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float ipk;
};

int main() {
    int jumlah = 5;
    Mahasiswa data[5];

    cout << "===========================" << endl;
    cout << "          SOAL 2   " << endl;
    cout << "===========================" << endl;

    cout << "\nMasukkan data " << jumlah << " mahasiswa:" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << "\n--- Mahasiswa ke-" << (i + 1) << " ---" << endl;
        cout << "Nama : ";
        cin >> data[i].nama;
        cout << "NIM  : ";
        cin >> data[i].nim;
        cout << "IPK  : ";
        cin >> data[i].ipk;
    }

    cout << "\n-----------------------------------------" << endl;
    cout << "        DATA SELURUH MAHASISWA" << endl;
    cout << "-----------------------------------------" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << "Mahasiswa ke-" << (i + 1) << endl;
        cout << "  Nama : " << data[i].nama << endl;
        cout << "  NIM  : " << data[i].nim << endl;
        cout << "  IPK  : " << data[i].ipk << endl;
    }

    int indexTertinggi = 0;
    for (int i = 1; i < jumlah; i++) {
        if (data[i].ipk > data[indexTertinggi].ipk) {
            indexTertinggi = i;
        }
    }

    cout << "\n------------------------------------------" << endl;
    cout << "     MAHASISWA DENGAN IPK TERTINGGI" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Nama : " << data[indexTertinggi].nama << endl;
    cout << "NIM  : " << data[indexTertinggi].nim << endl;
    cout << "IPK  : " << data[indexTertinggi].ipk << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}