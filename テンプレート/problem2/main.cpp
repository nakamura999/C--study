#include <iostream>
#include <string>
#include "collectionint.h"
 
using namespace std;
 
int main(){
    double array2[] = { 1.2, 3.5, 8.1, 4.9, 2.0, 2.2 };
    Collection<double>* d = new Collection<double>(array2, 6);
    d->showArray();
    cout << "最大値 : " << d->getMax() << endl;
    cout << "最小値 : " << d->getMin() << endl;
    delete d;

    //  配列変数の定義
    int array[] = { 1,5,4,2,3 };
    Collection<int>* c = new Collection<int>(array, 5);
    c->showArray();
    cout << "最大値 : " << c->getMax() << endl;
    cout << "最小値 : " << c->getMin() << endl;
    delete c;

    return 0;
}