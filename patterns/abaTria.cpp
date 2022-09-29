#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ch = 65;
    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }

        for (int k = 1; k <= i; k++)
            cout << (char)ch++ << " ";
        ch--;
        for (int m = 1; m < i; m++)
            cout << (char)--ch << " ";
        cout << '\n';
        ch = 65;
    }

    return 0;
}