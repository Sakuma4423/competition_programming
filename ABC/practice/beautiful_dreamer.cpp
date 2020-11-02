#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 初期化
    string value;
    cin >> value;

    smatch match_results;
    if (regex_search(value, match_results, regex("^(dream|dreamer|erase|eraser)*$")))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}