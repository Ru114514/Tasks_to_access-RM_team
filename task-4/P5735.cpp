//
// Created by wlpdy on 2026/10/20.
//

#include<iostream>
#include<cmath>
using namespace std;

double far(double x1, double y1,double x2, double y2) {
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

int main() {
    double x1,x2,x3,y1,y2,y3;
    cin >> x1 >> y1;
    cin.ignore();
    cin >> x2 >> y2;
    cin.ignore();
    cin >> x3 >> y3;
    cout << far(x1,y1,x2,y2)+far(x1,y1,x3,y3)+far(x2,y2,x3,y3) << endl;
    return 0;
}