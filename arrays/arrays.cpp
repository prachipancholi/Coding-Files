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
    cout << "Enter which element to delete";
    int ch;
    cin >> ch;
    int pos;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ch)
        {
            pos = i;
            n = n - 1;
            break;
        }
        
    }
    for (int i = pos; i <n; i++)
    {
        
            arr[i] = arr[i + 1];
        
       
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}