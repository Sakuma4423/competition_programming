#include <bits/stdc++.h>
#include <vector>
using namespace std;

/**
 * 偶数奇数判定
 * true：偶数
 * false：奇数
 * @param int num 判定対象
 * @return bool 判定結果
 */
bool isEven(int num)
{
    return num % 2 == 0;
}

int main()
{
    // 初期化
    int max;
    cin >> max;
    int arr[max];
    for (int i = 0; i < max; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + max);

    int alice_score = 0;
    int bob_score = 0;
    for (int i = 0; i < max; i++)
    {
        if (isEven(i))
            alice_score += arr[max - i - 1];
        else
            bob_score += arr[max - i - 1];
    }

    cout << alice_score - bob_score << endl;
    return 0;
}