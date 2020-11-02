#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int remainder = (a * b) % 2;

    if (remainder == 1)
    {
        cout << "Odd" << endl;
    }
    else
    {
        cout << "Even" << endl;
    }
}
