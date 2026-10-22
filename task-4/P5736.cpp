//
// Created by wlpdy on 2026/10/22.
//

#include<iostream>
using namespace std;

void prin(unsigned int i) {
    bool z;
    if (i < 2) {z = false;}
    else{z = true;}
    for(unsigned int j=2;j<i;j++) {
        if (i%j==0) {
            z=false;
            break;
        }
    }
    if(z) {cout<<i<< ' ';}
}

int main() {
    unsigned int n;
    cin>>n;
    cin.ignore();
    unsigned int m[n];
    for(unsigned int i=0;i<n;i++) {cin>>m[i];}
    for(unsigned int i=0;i<n;i++) {
        prin(m[i]);
    }
    cout<<endl;
    return 0;
}