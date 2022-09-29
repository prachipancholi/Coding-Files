#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "   ";
        }
        for (int m = 1, j = 65; m <= 2 * i + 1; m++, j++)
        {
            cout << (char)j << "  ";
                }
        cout << '\n';
    }

    return 0;
}