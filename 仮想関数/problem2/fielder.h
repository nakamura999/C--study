#ifndef _FIELDER_H_
#define _FIELDER_H_
 
#include "baseballplayer.h"
 
class Fielder : public BaseballPlayer{
public:
    //  コンストラクタ
    Fielder(string name,int number);
    //  野手がプレイする
    void play();
    int getNumber();
    //  種類の取得
    string getKind();
    //  名前の取得
    string getName();
};
 
#endif // _FIELDER_H_