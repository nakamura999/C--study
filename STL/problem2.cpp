#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main(){
    vector<int> data;
    int point;
    int max = 0,min;

    while (true) {
        cout << "正の整数を入力:";
        cin >> point;
        data.push_back(point);

        // -1を入力するとプログラム終了
        if (point == -1) {
            cout <<  endl;

            unsigned int i;

            min = data[0];  // 最小値の初期化

            cout <<  "最大値 : ";
            for (i = 0; i < data.size(); i++){
                if(data[i] >= max){
                    max = data[i];
                }
            }
            cout << max << endl;

            cout <<  "最小値 : ";
            for (i = 0; i < data.size(); i++){
                if(data[i] <= min && !(data[i] == -1)){
                    min = data[i];
                }
            }
            cout << min << endl;
            break;
        }
    }
    return 0;
}