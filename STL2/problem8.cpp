#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<char> st;
    char c[100];
    int i = 0;

    cout << "英単語を入力 : ";
    cin >> c;

    while (c[i] != '\0') {
        st.push(c[i]);
        i++;
    }

    cout << "表示 : ";
    while (!st.empty()) {
        cout << st.front();
        st.pop();
    }
    cout << endl;
    return 0;
}