#include <iostream>
#include <limits>
using namespace std;
/*
关于
多行
注释
*/
int main(){
    cout<<"hello world"<<endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //cin.get();
    return 0;
}

