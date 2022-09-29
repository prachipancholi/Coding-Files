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
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> distTo(n, INT_MAX);
    int source;
    cin >> source;
    distTo[source] = 0;
    pq.push(make_pair(0, source));
    while (!pq.empty())
    {

        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();
        for (auto it : adj[prev])
        {
            int v = it.first;
            int wt = it.second;
            if (distTo[v] > wt + distTo[prev])
            {

                distTo[v] = wt + distTo[prev];
                pq.push(make_pair(distTo[v], v));
            }
        }
    }

    cout << "The distances from source " << source << " are : \n";
    for (int i = 1; i <= n; i++)
        cout << distTo[i] << " ";
    cout << "\n";

    return 0;
}