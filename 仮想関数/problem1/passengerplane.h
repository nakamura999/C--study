#ifndef _PASSENGERPLANE_H_
#define _PASSENGERPLANE_H_
 
#include <iostream>
#include <string>
 
#include "AirPlane.h"
 
//  旅客機クラス
class PassengerPlane : public AirPlane{
private:
    string m_type;
public:
    //  コンストラクタ
    PassengerPlane();
    //  タイプの取得
    string getType();
    //  飛行する
    void fly();
    //  乗客を運ぶ
    void carryPassengers();
};
 
#endif // _PASSENGERPLANE_H_