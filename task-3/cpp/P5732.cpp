//
// Created by wlpdy on 2026/10/14.
//
#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n) {
        vector<int> lin = {1};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < lin.size(); j++) {
                cout << lin[j];
                cout << ' ';
            }
            cout << endl;
            lin.push_back(1);
            vector<int> carry = lin;
            for (int j = 1; j < lin.size()-1; j++) {
                lin[j] = carry[j-1] + carry[j];
            }
        }
    }
}