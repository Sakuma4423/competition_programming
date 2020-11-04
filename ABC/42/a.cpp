#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 初期化
    vector<int> arr(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    // 入力値を降順でソート
    sort(arr.rbegin(), arr.rend());

    if (arr[0] == 7 && arr[1] == 5 && arr[2] == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
