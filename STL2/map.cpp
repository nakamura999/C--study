#include <iostream>
#include <string>
#include <map>
// map - 連想配列
 
using namespace std;
 
int main() {
    map <string, int> score;  // map のデータ構造を用意する。
    // map <キーの型, 値の型>
    string names[] = { "Tom","Bob","Mike" };
    score[names[0]] = 100;          //  キーと値の関連付け① Tom : 100
    score[names[1]] = 80;           //  キーと値の関連付け② Bob : 80
    score[names[2]] = 120;          //  キーと値の関連付け③ Mike : 120
    int i;
    for(i = 0; i < 3; i++){
            cout << names[i] << ":" << score[names[i]]  << endl;
    }
    return 0;
}