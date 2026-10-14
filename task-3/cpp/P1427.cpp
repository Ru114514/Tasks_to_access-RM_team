//
// Created by wlpdy on 2026/10/14.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int x;
    while (cin >> x && x != 0) { //读到0就停止
        v.push_back(x);
    }
    for (int i = v.size()-1; i >= 0; i--) {
        if(i != v.size()-1) cout << " ";
        cout << v[i];
    }
    return 0;
}


