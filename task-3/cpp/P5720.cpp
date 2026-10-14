//
// Created by wlpdy on 2026/10/13.
//
#include<iostream>
using namespace std;
int main() {
    long int a;
    cin>>a;
    cin.ignore();
    int i = 0;
    while (a > 1) {
        a = a/2;
        // cout<<a<<endl;
        i++;
    }
    cout << i<<endl;
    return 0;
}