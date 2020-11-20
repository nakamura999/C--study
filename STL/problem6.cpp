#include <iostream>
#include <list>
 
using namespace std;
 
int main(){
    list<int> li;
    int point;
    list<int>::iterator itr; // イテレータの宣言
    cout << "正の整数を入力する(-1を入力するとプログラム終了)" << endl;

    while (true) {
        cout << "正の整数を入力:";
        cin >> point;
        if(point > -1) {
            li.push_back(point);
            li.sort();
            cout << "入力された数 : ";
            for (itr = li.begin(); itr != li.end(); itr++){
                cout << *itr << ", ";
            }
            cout << endl << endl;
        } else {
            cout << ": プログラム終了" << endl;
            break;
        }
    }
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