#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<char> st;
    char c[100];
    int i = 0;

    cout << "英単語を入力 : ";
    cin >> c;

    while (c[i] != '\0') {
        st.push(c[i]);
        i++;
    }

    cout << "逆表示 : ";
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << endl;
    return 0;
}