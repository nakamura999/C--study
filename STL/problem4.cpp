#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main(){

    vector<string> data;
    string n;
    string max_moji, min_moji;

    do {
        cout << "文字列を入力:";
        getline(cin, n);
        if ( !n.empty() ) {
            data.push_back(n);
        }
    } while ( !n.empty() ); // 空でないならもう一度

    min_moji = data[0];
    max_moji = data[0];

    unsigned int i;
    for (i = 0; i < data.size(); i++){
        if(data[i].length() >= max_moji.length()){
            max_moji = data[i];
        }
    }
    for (i = 0; i < data.size(); i++){
        if(data[i].length() <= min_moji.length() || !(data[i].empty())){
            min_moji = data[i];
        }
    }
    cout <<  "最長の単語 : " << max_moji << endl;
    cout <<  "最小の単語 : " << min_moji << endl;
    return 0;
}