#include <iostream>
#include <string>
#include <stack>
 
using namespace std;
 
int main(){
    string n;
    stack<string> stu;
    cout << "文字列を入力(enterを押すと終了)" << endl;
    cout << endl;

    do {
        cout << "文字列を入力:";
        getline(cin,n);
        if ( !n.empty() ) {
            stu.push(n);
        }
    } while ( !n.empty() ); // 空でないならもう一度

    while (!stu.empty()) {
        // frontで要素を取得し、popでその要素をqueから取り除く(2段階の作業が必要)
        cout << stu.top() << endl;
        stu.pop();
    }

    return 0;
}