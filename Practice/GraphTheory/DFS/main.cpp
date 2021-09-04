#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define MAX_NODES 20

void DFS(int curr, vector<int> adjL[])
{
	vector<int>::iterator it;
	static bool visited[MAX_NODES] = {false};

	visited[curr] = true;
		
	cout << curr << endl;

	for(it = adjL[curr].begin(); it < adjL[curr].end(); it++)
	{
		if(!visited[*it])
		{
			DFS(*it, adjL);
		}
	}
}

int main()
{
	int n, e;
	int u, v;
	vector<int> adjL [MAX_NODES];	

	cin >> n >> e;

	for(int i = 1; i <= e; i++)
	{
		cin >> u >> v;
		adjL[u].push_back(v);
		adjL[v].push_back(u);
	}

	DFS(1, adjL);

	return 0;
}
