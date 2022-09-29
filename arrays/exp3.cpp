#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "20BCS1334- Prachi Pancholi\n";
    unordered_map<int, int> m;
    int n;
    cout << "Enter number of elements in array\n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }

    for (auto i : m)
    {
        cout << "The frequency of " << i.first << " is " << i.second << "\n";
    }

    return 0;
}