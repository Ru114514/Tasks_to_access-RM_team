//
// Created by wlpdy on 2026/10/9.
//
/*
题目描述
学校和 yyy 的家之间的距离为 s 米，而 yyy 以 v 米每分钟的速度匀速走向学校。
在上学的路上，yyy 还要额外花费 10 分钟的时间进行垃圾分类。
学校要求必须在上午 8:00 到达，请计算在不迟到的前提下，yyy 最晚能什么时候出门。
由于路途遥远，yyy 可能不得不提前一点出发，但是提前的时间不会超过一天。
注意，yyy 只能在每分钟的第 0 秒时出发。

输入格式
一行两个正整数 s,v，分别代表路程和速度。

输出格式
输出一个 24 小时制下的时间，代表 yyy 最晚的出发时间。
输出格式为 HH:MM，分别代表该时间的时和分。必须输出两位，不足前面补 0。

输入输出样例
输入 #1复制
100 99

输出 #1复制
07:48

说明/提示
对于 100% 的数据，1≤s,v≤10^4

 */

#include<iostream>
using namespace std;

int main() {
    int s;
    int v;
    cin >> s >> v;
    cin.ignore();
    int min = s%v == 0 ? s/v :s/v+1;
    int h = min/60;
    min = min%60;
    min == 0 ? h = (24+8-h)%24 : h = (24+7-h)%24;
    if (min != 0){min = 60 - min;}
    if (h < 10) {
        cout << '0' << h;
    }
    else {cout << h;}
    cout << ':';
    if (min < 10) {
        cout << '0' << min;
    }
    else{cout << min;}
    return 0;
}

