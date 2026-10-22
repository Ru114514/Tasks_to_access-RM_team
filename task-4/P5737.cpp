//
// Created by wlpdy on 2026/10/22.
//

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int ns,ne;
    vector<int> all_years;
    cin>>ns>>ne;
    for (int i=ns;i<=ne;i++) {
        if (((i%4==0 && i%100!=0) || (i%400==0))) {
            all_years.push_back(i);
        }
    }
    cout<<all_years.size()<<endl;
    for (int i=0;i<all_years.size();i++) {
        cout<<all_years[i]<< ' ';
    }
    cout<<endl;
    return 0;
}