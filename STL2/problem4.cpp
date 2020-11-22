#include <iostream>
#include <string>
#include <set>

using namespace std;
int main()
{
    set<char> names;
    char data[10];
    int i = 0;

    cout << "英単語を入力：" ;
    cin >> data;

    while (data[i] != '\0')
    {
        names.insert(data[i]);
        i++;
    }

    cout << "使用されているアルファベット : ";
    set<char>::iterator it;
    for (it = names.begin(); it != names.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}