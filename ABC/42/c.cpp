#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 初期化
    int price, count;
    cin >> price >> count;
    vector<int> hate_number(count);
    for (int i = 0; i < count; i++)
    {
        cin >> hate_number[i];
    }
    // 入力値を昇順でソート

    vector<int> include_numbers;
    for (int i = 0; i <= 9; i++)
    {
        if (find(begin(hate_number), end(hate_number), i) != end(hate_number))
        {
            include_numbers.push_back(i);
        }
    }

    int result = price;
    int array[4];
    int num;
    bool is_include = false;
    bool out_loop = true;
    // 金額決定
    while (out_loop)
    {
        num = log10(result) + 1;
        for (int i = 0; i < num; i++)
        {
            array[0] = result % 10;
            array[1] = result / 10 % 10;
            array[2] = result / 100 % 10;
            array[3] = result / 1000 % 10;
            array[4] = result / 10000;
            is_include = find(begin(hate_number), end(hate_number), array[i]) != end(hate_number);
            if (is_include)
            {
                result++;
                break;
            }
            if (!is_include && i == num - 1)
            {
                cout << result << endl;
                out_loop = false;
                return 0;
            }
        }
    }
    return 0;
}