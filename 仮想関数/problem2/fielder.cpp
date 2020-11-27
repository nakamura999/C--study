#include "fielder.h"
 
Fielder::Fielder(string name,int number) 
{
    m_name = name;
    m_number = number;
    m_kind = "野手";
}
//  野手がプレイする
void Fielder::play()
{
    cout << "野手守る" << endl;
}