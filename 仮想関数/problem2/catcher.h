#ifndef _CATCHER_H_
#define _CATCHER_H_
 
#include "baseballplayer.h"
 
class Catcher : public BaseballPlayer{
public:
    //  コンストラクタ
    Catcher(string name,int number);
    //  キャッチャーがプレイする
    void play();
    int getNumber();
    //  種類の取得
    string getKind();
    //  名前の取得
    string getName();
};
 
#endif //_CATCHER_H_