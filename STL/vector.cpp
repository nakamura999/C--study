#include <iostream>
#include <string>
#include <vector>
// vectorクラスのインクルード

// vectorは,サイズを意識せずに使える配列で、動的配列
 
using namespace std;
 
int main(){
    vector<int> v1;
    vector<string> v2;
    v1.push_back(1);
    // push_back 配列に値の代入
    v1.push_back(2);
    v1.push_back(3);
    v2.push_back("ABC");
    v2.push_back("DEF");
    unsigned int i;
    for (i = 0; i < v1.size(); i++)
    {
        cout << "v1[" << i << "]=" << v1[i] << endl;
    }
    for (i = 0; i < v2.size(); i++)
    {
        cout << "v2[" << i << "]=" << v2[i] << endl;
    }
    return 0;
}

// ☆vectorの主なメンバ関数
// push_back()	要素の追加
// clear()	要素のクリア
// size()	配列の大きさを得る関数
// capacity()	動的配列に追加できる要素の許容量
// empty()	要素が空かどうかを調べる