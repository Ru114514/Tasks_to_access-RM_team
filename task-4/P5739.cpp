//
// Created by wlpdy on 2026/10/23.
//
#include<iostream>
using namespace std;

long int jei(long int n) {
    if (n == 0) {
        return 1;
    }
    return n * jei(n - 1);
}

int main() {
    int n;
    cin>>n;
    cout << jei(n) << endl;
    return 0;
}