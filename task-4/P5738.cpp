//
// Created by wlpdy on 2026/10/22.
//
/*
4 6
1 2 3 6 5 4
8 7 9 5 6 4
0 0 8 5 6 3
6 4 3 6 5 7
*/
#include<iomanip>
#include<iostream>
using namespace std;
void paixu(int v[],const int &m) {
    int tamp;
    for (int j=0;j<m-1;j++) {
        for (int i = 0; i < m-1-j; i++) {
            if (v[i] < (v[i + 1])) {
                tamp = v[i];
                v[i] =v[i + 1];
                v[i + 1] = tamp;
            }
        }
    }
}
void paixu(float v[],const int &m) {
    float tamp;
    for (int j=0;j<m-1;j++) {
        for (int i = 0; i < m-1-j; i++) {
            if (v[i] < (v[i + 1])) {
                tamp = v[i];
                v[i] =v[i + 1];
                v[i + 1] = tamp;
            }
        }
    }
}
int main() {
    int n,m;
    cin>>n>>m;
    cin.ignore();
    int djb[n][m];
    float xs[n];
    for (int i =0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>djb[i][j];
        }
        cin.ignore();
        paixu(djb[i],m);
        int add = 0;
        for (int j = 1; j < m-1; j++) {
            add += djb[i][j];
        }
        xs[i] = static_cast<float>(add)/(m-2);
    }
    paixu(xs,m);
    cout <<fixed << setprecision(2) << xs[0] << endl;
    return 0;
}