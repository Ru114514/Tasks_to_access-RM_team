//
// Created by wlpdy on 2026/10/14.
// 压缩技术
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
    vector<int> ma;
    string txt;
    getline(cin,txt);
    for (char &c : txt) {
        if (c!=' ') {
            ma.push_back(c - '0');
        }
    }
    int show[ma[0]][ma[0]];
    int col = 0;
    bool poi = false;
    for (int i = 1; i < ma.size(); i++) {
        for (int j = 0; j < ma[i];j++) {
            cout << poi;
            col++;
            if (col == ma[0]) {
                col = 0;
                cout << endl;
            }
        }
        poi = !poi;
    }
    return 0;
}