#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        int j = i-1;
        int temp = arr[i];
        while (arr[j] >=temp && j>= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k];
    }

    return 0;
}