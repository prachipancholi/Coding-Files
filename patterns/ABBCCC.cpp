#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 0; i--)
    {
        for (int j = 65; j <= i + 65; j++)
        {
            cout << (char)j;
        }
        cout << '\n';
    }

    return 0;
}