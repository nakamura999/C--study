#include <iostream>
#include <string>
#include <map>
 
using namespace std;
 
int main() {
    map <string, string> data;  // map のデータ構造を用意する。
    string n;
    string EAnimal[] = { "cat","dog","bird","tiger" };
    data[EAnimal[0]] = "猫";
    data[EAnimal[1]] = "犬";
    data[EAnimal[2]] = "鳥";
    data[EAnimal[3]] = "虎";

    cout << "英語で動物の名前を入力してください : ";
    cin >> n;
    for(int i = 0; i < data.size(); i++){
        if( n == EAnimal[i]) {
            cout << "「" << data[EAnimal[i]] << "」です" << endl;
            break;
        }else if(n!="cat" && n!="dog" && n!="bird" && n!="tiger") {
            cout << "対応するデータは登録されていません" << endl;
            break;
        }
    }
    return 0;
}