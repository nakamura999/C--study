#ifndef _PITCHER_H_
#define _PITCHER_H_
 
#include "baseballplayer.h"
 
class Pitcher : public BaseballPlayer{
public:
    //  コンストラクタ
    Pitcher(string name,int number);
    //  ピッチャーがプレイする
    void play();

    int getNumber();
    //  種類の取得
    string getKind();
    //  名前の取得
    string getName();
};
 
#endif //_PITCHER_H_