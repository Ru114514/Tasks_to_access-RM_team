//
// Created by wlpdy on 2026/10/14.
//
#include <iostream>
using namespace std;

char jl0[5][3] = {
    {'X','X','X'},
    {'X','.','X'},
    {'X','.','X'},
    {'X','.','X'},
    {'X','X','X'}
};
char jl1[5][3] = {
    {'.','.','X'},
    {'.','.','X'},
    {'.','.','X'},
    {'.','.','X'},
    {'.','.','X'}
};
char jl2[5][3] = {
    {'X','X','X'},
    {'.','.','X'},
    {'X','X','X'},
    {'X','.','.'},
    {'X','X','X'}
};
char jl3[5][3] = {
    {'X','X','X'},
    {'.','.','X'},
    {'X','X','X'},
    {'.','.','X'},
    {'X','X','X'}
};
char jl4[5][3] = {
    {'X','.','X'},
    {'X','.','X'},
    {'X','X','X'},
    {'.','.','X'},
    {'.','.','X'}
};
char jl5[5][3] = {
    {'X','X','X'},
    {'X','.','.'},
    {'X','X','X'},
    {'.','.','X'},
    {'X','X','X'}
};
char jl6[5][3] = {
    {'X','X','X'},
    {'X','.','.'},
    {'X','X','X'},
    {'X','.','X'},
    {'X','X','X'}
};
char jl7[5][3] = {
    {'X','X','X'},
    {'.','.','X'},
    {'.','.','X'},
    {'.','.','X'},
    {'.','.','X'}
};
char jl8[5][3] = {
    {'X','X','X'},
    {'X','.','X'},
    {'X','X','X'},
    {'X','.','X'},
    {'X','X','X'}
};
char jl9[5][3] = {
    {'X','X','X'},
    {'X','.','X'},
    {'X','X','X'},
    {'.','.','X'},
    {'X','X','X'}
};
char (* jl[10])[3] = {jl0,jl1,jl2,jl3,jl4,jl5,jl6,jl7,jl8,jl9,};
int main() {
    int n;
    cin >> n;
    cin.ignore();
    int num[n];
    char txt[n];
    cin >> txt;
    for (int i = 0; i < n; i++) {
        num[i] = static_cast<int>(txt[i] - '0');
    }
    cin.ignore();
    for (int r = 0; r < 5; r++) {
        for (int i = 0; i < n; i++) {
            cout << ' ';
            for (int j = 0; j < 3; j++) {
                cout << jl[num[i]][r][j];
                cout << '.';
            }
            cout << ' ';
        }
        cout << endl;
    }
    return 0;
}