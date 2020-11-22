#include<iostream>
#include<stack>
using namespace std;
int main() {
  stack<char> st;
  char c;
  cin >> c;

  while (cin >> c) {
    if(c != '\0') {
        st.push(c);
    } else {
        break;
    }
  }

  while (!st.empty()) {
    cout << st.top();
    st.pop();
  }
  cout << endl;
  return 0;
}