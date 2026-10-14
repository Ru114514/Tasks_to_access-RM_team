//
// Created by wlpdy on 2026/10/13.
//
#include <iomanip>
#include<iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    float n1 = 0;
    float n2 = 0;
    int num =0;
    cin.ignore();
    for (int i=1;i<=n;i++) {
        if (i%k==0) {
            num++;
            n1 += i;
        }
        else{n2 += i;}
    }
    cout<< fixed << setprecision(1)<<(n1/num)<<' '<<(n2/(n-num))<<endl;
    return 0;
}