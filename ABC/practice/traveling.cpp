#include <bits/stdc++.h>
using namespace std;

/**
 * 偶数奇数一致判定
 * true：偶奇一致
 * false：偶奇不一致
 * @param int time 時間
 * @param int x + y 座標
 * @return bool 判定結果
 */
bool isEvenMatch(int time, int coordinate)
{
    int is_time_even = time % 2;
    int is_coordinate_even = coordinate % 2;

    return ((is_time_even + is_coordinate_even) % 2 == 0);
}

/**
 * XYの移動可能判定
 * @param int time 時間
 * @param int x + y 座標
 * @return bool 偶奇判定
 */
bool canTravel(int time, int coordinate)
{
    bool is_even_match = isEvenMatch(time, coordinate);
    return is_even_match && (time >= coordinate);
}

int main()
{
    // 初期化
    int max;
    cin >> max;
    vector<int> time(max);
    vector<int> row(max);
    vector<int> column(max);
    for (int i = 0; i < max; i++)
    {
        cin >> time[i] >> row[i] >> column[i];
    }

    // シカの旅行
    int time_diff = time[0];
    int row_diff = row[0];
    int column_diff = column[0];
    for (int i = 0; i < max; i++)
    {
        // 現座標と次座標との差分を計算（絶対値）
        if (i != 0)
        {
            time_diff = time[i] - time[i - 1];
            row_diff = abs(row[i] - row[i - 1]);
            column_diff = abs(column[i] - column[i - 1]);
        }

        if (!canTravel(time_diff, (row_diff + column_diff)))
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
