#include <iostream>
 
using namespace std;

void printf(int);
 
int main(){
    int a = 7;
    int &n = a;
    cout << "a= " << a << endl;
    ref(n);
    printf(n);
    // cout << "a= " << a << endl;
 
}

void printf(int n){
    cout << "a= " << n + 3 << endl;
}