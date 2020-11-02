#include <bits/stdc++.h>
#include <vector>
using namespace std;

/**
 * 引数の各桁を分割, 加算して返却する
 * 分割は最大5桁
 * @param int value 分割対象数列
 * @return array 分割後の値
 */
int sumSplitValue(int value)
{
    // 分割
    int array[4];
    array[0] = value / 10000 % 10;
    array[1] = value / 1000 % 10;
    array[2] = value / 100 % 10;
    array[3] = value / 10 % 10;
    array[4] = value % 10;

    return array[0] + array[1] + array[2] + array[3] + array[4];
}

int main()
{
    // 初期化
    int value, min, max;
    cin >> value >> min >> max;

    int result = 0;
    for (int i = 0; i <= value; i++)
    {
        int sum_value = sumSplitValue(i);
        if (sum_value >= min && sum_value <= max)
            result += i;
    }

    cout << result << endl;
    return 0;
}