//
// Created by wlpdy on 2026/10/13.
//

#include <iostream>
#include <vector>
using namespace std;
void zuan(vector<int>* num);//转
void time(vector<int>* num,int x);
void times(vector<int>* n1,vector<int>* n2);
void add(vector<int>* n1, vector<int>* n2);
vector<int> shipei(int n);

int main() { //完备且复杂
    short n;
    cin >> n;
    cin.ignore();
    vector<int> S = {1};
    vector<int> SUM = {0};
    for (int i = 1; i <= n; i++) {
        vector<int> f = shipei(i);
        times(&S,&f);
        add(&SUM,&S);
    }
    for (int i = 0; i < SUM.size(); i++) {
        cout << SUM[i];
    }
    cout << endl;
    return 0;
}

// int main() {   //较完备且简单
//     short n;
//     cin >> n;
//     cin.ignore();
//     vector<int> S = {1};
//     vector<int> SUM = {0};
//     for (int i = 1; i <= n; i++) {
//         time(&S,i);
//         add(&SUM,&S);
//     }
//     for (int i = 0; i < SUM.size(); i++) {
//         cout << SUM[i];
//     }
//     cout << endl;
//     return 0;
// }

vector<int> shipei(int n) {
    vector<int> S;
    while (n > 0) {
        S.push_back(n%10);
        n /= 10;
    }
    zuan(&S);
    return S;
}

void zuan(vector<int>* num) {  //转
    vector<int> f;
    for (int i = (*num).size()-1;i >=0;i--) {
        f.push_back((*num)[i]);
    }
    for (int j = 0; j < f.size(); j++) {
        (*num)[j] = f[j];
    }
}

void time(vector<int>* num,int x) {
    zuan(num);
    long long carry = 0;
    for (int j = 0; j < (*num).size();j++) {
        long long temp = 1LL * (*num)[j] * x + carry;
        (*num)[j] = temp % 10;
        carry = temp / 10;
    }
    while(carry > 0){
        (*num).push_back(carry % 10);
        carry /=10;
    }
    zuan(num);
}

void times(vector<int>* n1,vector<int>* n2) {
    zuan(n2);
    vector<int> l = *n1;
    vector<int> sum = {0};
    for (int i = 0; i < (*n2).size(); i++) {
        time(n1,(*n2)[i]);
        if (i > 0) {
            for (int j = 0; j < i;j++){
                time(n1,10);
            }
        }
        add(&sum,n1);
        *n1 = l;
    }
    *n1 = sum;

}

void add(vector<int>*n1, vector<int>* n2)
{
    zuan(n1);
    zuan(n2);
    int carry = 0;
    int max_len = max((*n1).size(), (*n2).size());
    for(int i = 0; i < max_len || carry; i++) {
        if(i >= (*n1).size()) {(*n1).push_back(0);}
        if(i >= (*n2).size()) {(*n2).push_back(0);}

        int sum = (*n1)[i] + (*n2)[i] + carry;
        (*n1)[i] = sum % 10;
        carry = sum / 10;
    }
    zuan(n1);
    zuan(n2);
}
