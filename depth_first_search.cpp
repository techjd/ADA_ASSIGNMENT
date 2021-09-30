#include <bits/stdc++.h>
using namespace std;

void dfs(int element, vector<bool> &vis, vector<int> adj[], vector<int> &dfsorder)
{
	dfsorder.push_back(element);
	vis[element] = true;
	for (auto it : adj[element])
	{
		if (!vis[it])
		{
			dfs(it, vis, adj, dfsorder);
		}
	}
}

vector<int> make_dfs(vector<int> v[], int size)
{
	vector<bool> vis(size + 1);
	vector<int> dfsorder;
	for (int i = 1; i < size; i++)
	{
		if (!vis[i])
		{
			dfs(i, vis, v, dfsorder);
		}
	}

	return dfsorder;
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

	vector<int> dfsorder = make_dfs(graph, 8);

	cout << "DFS of the given graph is ";

	for (auto it : dfsorder)
	{
		cout << it << " ";
	}

	cout << "\n";
}