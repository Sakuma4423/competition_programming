#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 初期化
    string value;
    cin >> value;

    cmatch cmatch;
    if (regex_search(value, cmatch, regex("(dream|dreamer|erase|eraser)+")))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}