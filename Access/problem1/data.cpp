 
#include "data.h"

void CData::init()
{
    number = 0;
    comment = "";
}

void CData::setNumber(int num) {
    number = num;
}
int CData::getNumber(){
    return number;
}

void CData::setComment(string s) {
    comment = s;
}
string CData::getComment() {
    return comment;
}