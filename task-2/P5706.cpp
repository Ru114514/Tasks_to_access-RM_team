//
// Created by wlpdy on 2026/10/9.
//
/*
题目描述
现在有 t 毫升肥宅快乐水，要均分给 n 名同学。每名同学需要 2 个杯子。现在想知道每名同学可以获得多少毫升饮料（严格精确到小数点后 3 位），以及一共需要多少个杯子。

输入格式
输入一个实数 t 和一个正整数 n，使用空格隔开。

输出格式
输出两行。

第一行输出一个三位小数，表示可以获得多少毫升饮料。第二行输出一个正整数，表示一共需要多少个杯子。

输入输出样例
输入 #1复制

500.0 3
输出 #1复制

166.667
6

说明/提示
对于所有数据，0≤t≤10000 且小数点后不超过 3 位，1≤n≤1000。
*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main() {
    string txt;
    getline(cin,txt);
    //cout << txt << endl;
    string t;
    string n;
    bool f = 0;
    for (char i : txt) {
        //cout << "i = " << i << endl;
        if (i == ' ') {
            f=1;
            continue;
        }
        f == 0 ? t += i : n += i ;
    }
    // cout << t << endl;
    // cout << n << endl;
    double dt = stod(t);
    int in = stoi(n);

    cout << fixed << setprecision(3) << dt/in << endl;
    cout << in * 2 << endl;

    return 0;
}
