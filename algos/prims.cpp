#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "enter n m:\n";
    cin >> n >> m;
    vector<pair<int, int>> adj[n];
    int a, b, wt;
    for (int i = 0; i < m; i++)
    {
        cout << "enter a b wt\n";
        cin >> a >> b >> wt;
        adj[a].push_back(make_pair(b, wt));
        adj[b].push_back(make_pair(a, wt));
    }
    int key[n];
    int parent[n];
    bool mstSet[n];
    for (int i = 0; i < n; i++)
        key[i] = INT_MAX, mstSet[i] = false;
    key[0] = 0;
    parent[0] = -1;
    int ansWeight = 0;
    for (int count = 0; count < n - 1; count++)
    {

        int mini = INT_MAX, u;

        for (int v = 0; v < n; v++)
        {
            if (mstSet[v] == false && key[v] < mini)
                mini = key[v], u = v;
        }
        mstSet[u] = true;

        for (auto it : adj[u])
        {
            int v = it.first;
            int weight = it.second;
            if (mstSet[v] == false && weight < key[v])
                parent[v] = u, key[v] = weight;
        }
    }

    for (int i = 1; i < n; i++)
        cout << parent[i] << " - " << i << " \n";
    return 0;
}