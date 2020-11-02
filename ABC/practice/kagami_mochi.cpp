#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 初期化
    int max;
    cin >> max;
    vector<int> arr(max);
    int tmp;
    for (int i = 0; i < max; i++)
    {
        cin >> tmp;
        arr[i] = tmp;
    }
    // 入力値を降順でソート
    sort(arr.rbegin(), arr.rend());

    int before_value = 0;
    int count = 0;
    for (int i = 0; i < max; i++)
    {
        if (before_value != arr[i])
        {
            count++;
            before_value = arr[i];
        }
    }

    cout << count << endl;
    return 0;
}
