#include <bits/stdc++.h>
using namespace std;

vector<int> make_bfs(vector<int> graph[], int V)
{

	vector<int> bfs;

	vector<int> vis(V, 0);

	queue<int> q;

	q.push(1);

	vis[1] = 1;

	while (!q.empty())
	{

		int node = q.front();
		q.pop();
		bfs.push_back(node);

		for (auto it : graph[node])
		{
			if (!vis[it])
			{
				q.push(it);
				vis[it] = 1;
			}
		}
	}

	return bfs;
}

int main()
{

	vector<int> graph[8];
	graph[0] = {};
	graph[1] = {2};
	graph[2] = {1, 4, 7};
	graph[3] = {5};
	graph[4] = {2, 6};
	graph[5] = {3};
	graph[6] = {4, 7};
	graph[7] = {2, 6};

	vector<int> bfsorder = make_bfs(graph, 8);

	cout << "BFS of the given graph is ";

	for (auto it : bfsorder)
	{
		cout << it << " ";
	}

	cout << "\n";

	return 0;
}
