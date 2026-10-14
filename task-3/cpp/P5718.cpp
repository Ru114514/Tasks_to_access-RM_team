//
// Created by wlpdy on 2026/10/12.
//
#include<iostream>
#include<string>
using namespace std;
int main() {
    int n,x,b;
    cin>>n;
    cin.ignore();
    cin>>b;
    for (int i=1;i<n;i++) {
        cin >> x;
        if (b > x) {
            b = x;
        }
    }
    cout<<b;
    return 0;
}