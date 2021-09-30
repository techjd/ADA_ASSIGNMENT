#include <bits/stdc++.h>
using namespace std;

bool compare(pair<pair<int, int>, int> p1, pair<pair<int, int>, int> p2)
{
	if (p1.first.second < p2.first.second)
		return true;
	else
		return false;
}

int main()
{
	vector<pair<pair<int, int>, int>> activites;
	activites.push_back({{5, 9}, 1});
	activites.push_back({{1, 2}, 2});
	activites.push_back({{3, 4}, 3});
	activites.push_back({{0, 6}, 4});
	activites.push_back({{5, 7}, 5});
	activites.push_back({{8, 9}, 6});

	sort(activites.begin(), activites.end(), compare);

	vector<int> ans;

	ans.push_back(activites[0].second);

	int j = 0;

	for (int i = 1; i < activites.size(); i++)
	{
		if (activites[i].first.first >= activites[j].first.second)
		{
			ans.push_back(activites[i].second);
			j = i;
		}
	}

	cout << "Selected activites are as follows "
		 << "\n";
	for (auto it : ans)
	{
		cout << it << "\n";
	}
	return 0;
}