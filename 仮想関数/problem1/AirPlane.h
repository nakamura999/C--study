#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_
 
#include <iostream>
#include <string>
 
using namespace std;
 
class AirPlane{
public:
    //  「飛ぶ」関数
    virtual void fly(){ cout << "飛行する" << endl; }
};
 
#endif // _BIRD_H_