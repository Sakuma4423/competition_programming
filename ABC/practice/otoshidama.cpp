#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 初期化
    // max：もらったお札の枚数
    // price：もらった金額の合計
    int max, price;
    cin >> max >> price;

    // 各値段ごとの使用可能なお札数
    // ※ maxを考慮しない
    int max_10000 = price / 10000 > max ? max : price / 10000;
    int max_5000 = price / 5000 > max ? max : price / 5000;
    int max_1000 = price / 1000 > max ? max : price / 1000;

    for (int index_1000 = 0; index_1000 <= max_1000; index_1000++)
    {
        for (int index_5000 = 0; index_5000 <= max_5000; index_5000++)
        {
            for (int index_10000 = 0; index_10000 <= max_10000; index_10000++)
            {
                // もらった価格以上 || もらったお札枚数以上
                if (((10000 * index_10000 + 5000 * index_5000 + 1000 * index_1000) > price) || ((index_10000 + index_5000 + index_1000) > max))
                {
                    break;
                }
                // 合計値がpriceと同じ && お札数がmax以下
                else if (((10000 * index_10000 + 5000 * index_5000 + 1000 * index_1000) == price) && ((index_10000 + index_5000 + index_1000) == max))
                {
                    cout << index_10000 << " " << index_5000 << " " << index_1000 << endl;
                    return 0;
                }
            }
        }
    }
    // for内でreturnしなかった場合
    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}