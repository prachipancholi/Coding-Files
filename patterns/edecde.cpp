#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ch = 65 + n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << (char)ch;
            ch++;
        }
        ch = ch - i - 1;
        cout << '\n';
    }

    return 0;
}