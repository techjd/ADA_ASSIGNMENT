#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, m;
    cin >> N >> m;

    vector<pair<int, int>> graph[N];

    int a, b, wt;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> wt;
        graph[a].push_back({b, wt});
        graph[b].push_back({a, wt});
    }

    int parent[N];

    int key[N];

    bool mstSet[N];

    for (int i = 0; i < N; i++)
    {
        key[i] = INT_MAX, mstSet[i] = false;
    }

    key[0] = 0;

    parent[0] = -1;

    for (int count = 0; count < N - 1; count++)
    {

        int mini = INT_MAX, u;

        for (int v = 0; v < N; v++)
        {
            if (mstSet[v] == false && key[v] < mini)
            {
                mini = key[v], u = v;
            }
        }

        mstSet[u] = true;

        for (auto it : graph[u])
        {

            int v = it.first;
            int weight = it.second;

            if (mstSet[v] == false && weight < key[v])
            {
                parent[v] = u,
                key[v] = weight;
            }
        }
    }

    for (int i = 1; i < N; i++)
    {
        cout << parent[i] << " - " << i << " \n";
    }
    return 0;
}