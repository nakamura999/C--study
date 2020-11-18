#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main(){
    vector<int> data;
    int point;

    while (true) {
        cout << "正の整数を入力:";
        cin >> point;
        data.push_back(point);

        // -1を入力するとプログラム終了
        if (point == -1) {
            cout <<  endl;

            unsigned int i;

            cout <<  "偶数 : ";
            for (i = 0; i < data.size(); i++){
                if(data[i] % 2 == 0){
                    cout <<  data[i] << " ";
                }
            }
            cout <<  endl;
            cout <<  "奇数 : ";
            for (i = 0; i < data.size(); i++){
                if(!(data[i] % 2 == 0) && !(data[i] == -1)){
                    cout <<  data[i] << " ";
                }
            }
            cout <<  endl;
            break;
        }
    }
    return 0;
}

// ☆vectorの主なメンバ関数
// push_back()	要素の追加
// clear()	要素のクリア
// size()	配列の大きさを得る関数
// capacity()	動的配列に追加できる要素の許容量
// empty()	要素が空かどうかを調べる