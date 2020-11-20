#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, string>kansu;
    string seisu[] = {"0", "1","2","3","4","5","6","7","8","9" };
    string n;
    map<string,string>::iterator itr;
    kansu[seisu[0]] = "〇";
    kansu[seisu[1]] = "一";
    kansu[seisu[2]] = "二";
    kansu[seisu[3]] = "三";
    kansu[seisu[4]] = "四";
    kansu[seisu[5]] = "五";
    kansu[seisu[6]] = "六";
    kansu[seisu[7]] = "七";
    kansu[seisu[8]] = "八";
    kansu[seisu[9]] = "九";

    cout << "整数の値を入力してください:";
    cin >> n;
    int j = n.length(); // 逆から数える「,」

    cout << "変換結果 : ";
    for(int i = 0;i < n.length();i++){
        itr = kansu.find(n.substr(i,1));
        j--;
        if(itr != kansu.end()){
            if(j % 3 == 0) {
                if(i == (n.length() - 1)) {
                    cout << itr->second;
                } else {
                    cout << itr->second << ",";
                }
            } else {
                cout << itr->second;
            }
        }
    }
    cout << endl;
    return 0;
}