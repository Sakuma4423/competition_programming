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
    int max;
    cin >> max;
    int arr[max];

    // 配列初期化
    for (int i = 0; i < max; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    bool is_even = true;
    while (is_even)
    {
        // 配列全体の偶奇判定
        int even_count = 0;
        for (int value : arr)
        {
            if (isEven(value))
                even_count++;
        }

        if (max == even_count) // 全て偶数
        {
            for (int i = 0; i < max; i++)
            {
                arr[i] = arr[i] / 2;
            }
            count++;
        }
        else // 奇数が含まれる
        {
            is_even = false;
        }
    }
    cout << count << endl;
    return 0;
}