//
// Created by wlpdy on 2026/10/14.
//

#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int big[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            big[i][j] = 0;
        }
    }
    big[0][N/2] = 1;
    int row = 0;
    int col = N/2;
    for (int K = 2; K <= N*N;K++) {
        if (row == 0 && col != N-1) {
            row = N-1;
            col = col+1;
        }
        else if  (col == N-1 && row != 0) {
            col = 0;
            row = row-1;
        }
        else if (row == 0 && col == N-1) {
            row += 1;
        }
        else if (row != 0 && col != N-1) {
            if (big[row-1][col+1]) {
                row = row+1;
            }
            else {
                row -= 1;
                col += 1;
            }
        }
        big[row][col] = K;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << big[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}