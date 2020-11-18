#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> number[10];

    int a;

    while (true) {
        cout << "正の整数を入力:";
        cin >> a;

        //一の位を調べそれぞれのリストに追加
        if (a > 0) {
                number[a % 10].push_back(a);
        }
        else {
            for (int i = 0; i < 10; ++i)
            {
                cout << "一の位が" << i << "：";
                if (number[i].empty()) {
                    cout << "なし" << endl;
                }
                else {
                    for (int n : number[i])
                    {
                        cout << n << " ";
                    }
                    cout << endl;
                }
            }
            break;
        }
    }
}