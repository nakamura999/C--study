#include <iostream>
// 引数の参照渡し 参照渡しによる引数の定義 void ref(int& n)
// 変数を引数として渡すと、そのアドレスへの参照が渡される
 
using namespace std;
 
void ref(int&);
void print(int);
 
int main(){
    //  整数の値を代入
    int n = 5;
    print(n);
    //  参照渡し
    ref(n);
    print(n);
    return 0;
}
 
void ref(int& n){
    n = 1;
}
void print(int n){
    cout << "n=" << n << endl;
}