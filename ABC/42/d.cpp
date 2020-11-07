#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 初期化
    int height, width, cant_height, cant_width;
    // TODO sakuma 連想配列の方が良さそう
    cin >> height >> width >> cant_height >> cant_width;

    // 侵入不可能なマスを埋める
    vector<vector<int>> map(height, vector<int>(width));
    for (int row = 0; row < cant_width; row++)
    {
        for (int column = 0; column < cant_height; column++)
        {
            map[row][column] = 1;
        }
    }

    return 0;
}