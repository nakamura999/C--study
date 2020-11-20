#include <iostream>
#include <string>
#include <list>
 
using namespace std;
 
int main(){
    list<string> data;
    string n;
    list<string>::iterator itr; // イテレータの宣言
    cout << "文字列を入力(enterを押すと終了)" << endl;
    cout << endl;

    do {
        cout << "文字列を入力:";
        getline(cin, n);
        if ( !n.empty() ) {
            data.push_back(n);
        }
    } while ( !n.empty() ); // 空でないならもう一度

    for (itr = data.begin(); itr != data.end();){
        if(itr->length() >= 5) {
            itr = data.erase(itr);
        } else {
            ++itr;
        }
    }

    cout << endl;
    cout << "5文字未満の単語 : ";
    for (itr = data.begin(); itr != data.end(); itr++){
        cout << *itr << ", ";
    }
    cout << endl;
    return 0;
}

// ☆listの主なメンバ関数
// push_front()	先頭に要素を追加する。
//push_back()	末尾に要素を追加する。
//pop_front()	先頭の要素を削除する。
// pop_back()	末尾の要素を削除する。
// insert()	要素を挿入する。
// erase()	要素を削除する。
// clear()	全要素を削除する。