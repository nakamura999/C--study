#include <iostream>
// #includeは、C言語同様、ヘッダファイルと呼ばれるファイルを読み込むときに用いる宣言
 
using namespace std;
// using namespaceは、指定された名前の名前空間
// 名前空間という概念を用意し、名前空間が違えば、同じ名前を用いることができる
 
int main(){
    // C++特有の出力
    cout << "HelloWorld." << endl;
    // C++言語の入出力ストリームでは、>>および、<<を用いることにより、ストリームと呼ばれる対象に対するデータのやりとりを行う。ここでは、coutを通じて、巣津力ストリームに、文字列"HelloWorld."を送り出している
    // endlは改行


    // Cを拡張した言語なのでC言語でも可能
    printf("HelloWorld.\n");
    return 0;
}