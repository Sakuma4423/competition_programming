#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    string arr[3];

    cin >> str;
    arr[0] = str[0];
    arr[1] = str[1];
    arr[2] = str[2];

    int result = 0;
    for (string value : arr)
    {
        if (value == "1")
            result++;
    }
    cout << result << endl;
}
