#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high, int pivot)
{
    int PIndex = low;

    for (int i = low; i <= high; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[PIndex], arr[i]);

            PIndex++;
        }
    }

    PIndex--;

    return PIndex;
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pivot = arr[end];
        int pindex = partition(arr, start, end, pivot);
        quickSort(arr, start, pindex - 1);
        quickSort(arr, pindex + 1, end);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
