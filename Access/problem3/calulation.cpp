#include "calulation.h"

void Calulation::setNumber1(int n){
    m_number1 = n;
}
int Calulation::getNumber1() {
    return m_number1;
}

void Calulation::setNumber2(int n){
    m_number2 = n;
}
int Calulation::getNumber2() {
    return m_number2;
}

int Calulation::add() {
    return m_number1 + m_number2;
}

int Calulation::sub() {
    return m_number1 - m_number2;
}