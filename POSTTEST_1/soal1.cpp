#include <iostream>
using namespace std;

int FindMin(int* A, int n, int* indexMin) {
    int min = A[0];
    *indexMin = 0;

    for (int i = 1; i <= n - 1; i++) {
        if (A[i] < min) {
            min = A[i];
            *indexMin = i;
        }
    }
    return min;
}

int main() {
    int fib[8] = {1, 1, 2, 3, 5, 8, 13, 21};
    int n = 8;

    cout << "===========================" << endl;
    cout << "          SOAL 1   " << endl;
    cout << "===========================" << endl;

    cout << "\nIsi Array (Bilangan Fibonacci):" << endl;
    for (int i = 0; i < n; i++) {
        cout << "fib[" << i << "] = " << fib[i] << endl;
    }

    int indexMin;
    int nilaiMin = FindMin(fib, n, &indexMin);

    cout << "\nHasil:" << endl;
    cout << "Nilai Minimum : " << nilaiMin << endl;
    cout << "Indeks        : " << indexMin << endl;

    cout << "\n--------------------------------------------" << endl;
    cout << "Analisis Kompleksitas Waktu:" << endl;
    cout << "Best Case  : T(n) = 4n + 4  --> O(n)" << endl;
    cout << "Worst Case : T(n) = 5n + 3  --> O(n)" << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}

/*
Pseudocode FindMin:
procedure FindMin(A : array of n elements)
  min <- A[0]
  for i <- 1 to n-1 do
    if A[i] < min then
      min <- A[i]
    end if
  end for
  return min
end procedure

-------------------------------------------------------------
| Pseudocode          | Cost | Tmin  | Tmax  |
-------------------------------------------------------------
| procedure FindMin   |  C1  |   1   |   1   |
| min <- A[0]         |  C2  |   1   |   1   |
| for i <- 1 to n-1   |  C3  |   n   |   n   |
| if A[i] < min       |  C4  |  n-1  |  n-1  |
| min <- A[i]         |  C5  |   0   |  n-1  |  <- best: kondisi selalu salah (array sudah urut naik)
| end if              |  C6  |  n-1  |  n-1  |       worst: kondisi selalu benar (array urut turun)
| end for             |  C7  |   n   |   n   |
| return min          |  C8  |   1   |   1   |
| end procedure       |  C9  |   1   |   1   |
-------------------------------------------------------------
| Total waktu T(n)    |      | O(n)  | O(n)  |
-------------------------------------------------------------

PERHITUNGAN MANUAL:

Best Case (array urut menaik, min tidak pernah diperbarui):
  Tn = C1 + C2 + C3*n + C4*(n-1) + 0 + C6*(n-1) + C7*n + C8 + C9
     = C1 + C2 + C3n + C4n-C4 + C6n-C6 + C7n + C8 + C9
     = (C3+C4+C6+C7)n + (C1+C2+C8+C9-C4-C6)
     = (1+1+1+1)n + (1+1+1+1-1-1)
     = 4n + 4
  --> Fungsi linear --> Big-O: O(n)

Worst Case (array urut menurun, min selalu diperbarui):
  Tn = C1 + C2 + C3*n + C4*(n-1) + C5*(n-1) + C6*(n-1) + C7*n + C8 + C9
     = (C3+C4+C5+C6+C7)n + (C1+C2+C8+C9-C4-C5-C6)
     = (1+1+1+1+1)n + (1+1+1+1-1-1-1)
     = 5n + 3
  --> Fungsi linear --> Big-O: O(n)

KESIMPULAN: Tmin(n) = O(n) | Tmax(n) = O(n)
*/