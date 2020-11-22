#include <iostream>
#include <string>
#include <queue>
 
using namespace std;
 
int main(){
    string n;
    queue<string> que;
    cout << "文字列を入力(enterを押すと終了)" << endl;
    cout << endl;

    do {
        cout << "文字列を入力:";
        getline(cin,n);
        if ( !n.empty() ) {
            que.push(n);
        }
    } while ( !n.empty() ); // 空でないならもう一度

    while (!que.empty()) {
        // frontで要素を取得し、popでその要素をqueから取り除く(2段階の作業が必要)
        cout << que.front() << endl;
        que.pop();
    }

    return 0;
}