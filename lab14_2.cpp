#include <iostream>
using namespace std;

const int N = 5;

void inputMatrix(double A[N][N]) {
    for (int i = 0; i < N; i++) {
        cout << "Row " << i+1 << ": ";
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
}

void findLocalMax(const double A[N][N], bool B[N][N]) {
    // ตั้งค่าขอบของ B ให้เป็น false
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
                B[i][j] = false; // ขอบเมทริกซ์
            } else {
                // ตรวจสอบค่ากับจุดรอบข้าง (บน, ล่าง, ซ้าย, ขวา)
                if (A[i][j] >= A[i - 1][j] && // ด้านบน
                    A[i][j] >= A[i + 1][j] && // ด้านล่าง
                    A[i][j] >= A[i][j - 1] && // ด้านซ้าย
                    A[i][j] >= A[i][j + 1]) { // ด้านขวา
                    B[i][j] = true;
                } else {
                    B[i][j] = false;
                }
            }
        }
    }
}


void showMatrix(const bool B[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    double A[N][N];
    bool B[N][N];
    cout << "Input the matrix.....\n";
    inputMatrix(A);
    findLocalMax(A, B);
    cout << "Result is \n";
    showMatrix(B);
    return 0;
}
