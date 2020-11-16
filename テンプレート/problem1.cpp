#include <iostream>
#include <string>
 
using namespace std;

template <typename A>
A t_max(A a, A b){
    if(a > b){
        return a;
    }
    return b;
}

int main(){
    cout << t_max<int>(1, 2) << endl; 
    cout << t_max<double>(1.75,3.12) << endl;
    string s1 = "aiu",s2 = "eo";
    cout << t_max<string>(s1,s2) << endl;
    return 0;
}