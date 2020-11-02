#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 初期化
    int coin_500, coin_100, coin_50, sum_result;
    cin >> coin_500 >> coin_100 >> coin_50 >> sum_result;

    int pattern = 0;
    for (int index_500 = 0; index_500 <= coin_500; index_500++)
    {
        for (int index_100 = 0; index_100 <= coin_100; index_100++)
        {
            for (int index_50 = 0; index_50 <= coin_50; index_50++)
            {
                // 合計値がsum_resultと同じ
                if ((500 * index_500 + 100 * index_100 + 50 * index_50) == sum_result)
                    pattern++;
            }
        }
    }
    cout << pattern << endl;
    return 0;
}
