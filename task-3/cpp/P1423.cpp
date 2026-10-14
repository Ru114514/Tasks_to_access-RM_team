//
// Created by wlpdy on 2026/10/13.
//
#include<iostream>
using namespace std;
int main() {
    double s;
    cin >> s;
    cin.ignore();
    int stap = 0;
    double lon = 2;
    while (s > 0) {
        stap++;
        s -= lon;
        lon *= 0.98;
    }
    cout << stap << endl;
    return 0;
}