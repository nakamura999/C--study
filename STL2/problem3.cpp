#include <iostream>
#include <string>
#include <set>
// set 同じデータは、必ずひとつしか登録できない配列
 
using namespace std;
 
int main() {
    int data[10]; 
    set<int> points;

    cout << "乱数 : ";
    for(int i = 0; i<10; i++){
        data[i] = rand() % 10 + 1;
        points.insert(data[i]);
        cout << data[i] << " ";
    }
    cout << endl;

    cout << "出現した数 : ";
    set<int>::iterator it; //  イテレータを用意
    for(it = points.begin() ; it != points.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}

// insert() 要素の追加
// clear()	全ての要素をクリアする。
// empty()	集合が空であるときに true を返し、 そうでないときに false を返す。
// erase()	指定した要素をクリアする。
// size()	マップの中の要素数を返す。