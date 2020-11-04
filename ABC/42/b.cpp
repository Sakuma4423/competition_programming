#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 初期化
    int max, length;
    cin >> max >> length;
    string arr[max];
    for (int i = 0; i < max; i++)
    {
        cin >> arr[i];
    }
    // 入力値を昇順でソート
    sort(arr, arr + max);

    string result = "";
    for (string value : arr)
    {
        result += value;
    }

    cout << result << endl;
    return 0;
}