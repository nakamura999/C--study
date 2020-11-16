#include <iostream>
// C言語では、ローカル変数は関数の処理の先頭で宣言しなくてはならなかったが、C++言語では、どこで宣言してもかまわない
 
using namespace std;
 
int main(){
    cout << "ABC" << endl;
    //  処理の途中で変数を宣言
    int i;
    for (i = 0; i < 10; i++){
        cout << ":" << i;
    }
    cout << endl;
    return 0;
}