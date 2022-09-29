#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j <= i)
            {
                cout << j;
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = n; j >= 1; j--)
        {
            if (j <= i)
                printf("%d", j);
            else
                printf("  ");
        }
        cout << '\n';
    }

    return 0;
}