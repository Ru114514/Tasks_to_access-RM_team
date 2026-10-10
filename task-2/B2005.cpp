//
// Created by wlpdy on 2026/10/8.
//
#include <iostream>
using namespace std;
int main() {
    char ima = '0';
    cout << "请输入一个单字符:";
    cin >> ima;
    cout << "  " << ima << endl;
    cout << ' ';
    for (int i = 1; i <= 3 ;i++) {
        cout << ima;
    }
    cout  << endl;
    for (int i = 1; i <= 5 ;i++) {
        cout << ima;
    }
    cout  << endl;
    return 0;
}