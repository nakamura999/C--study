#include "hoge.h"
#include <iostream>
 
using namespace std;

//  コンストラクタ
Hoge::Hoge()
{
    cout << "コンストラクタ" << endl;
}
//  デストラクタ
Hoge::~Hoge()
{
    cout << "デストラクタ" << endl;
}
 
void Hoge::foo()
{
    cout << "fooメソッド" << endl;
}