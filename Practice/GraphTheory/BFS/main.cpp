#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define MAX_NODES 20

void BFS(int curr, vector<int> adjL[])
{
	queue<int> q;
	vector<int>::iterator it;
	bool visited[MAX_NODES] = {false};

	q.push(curr);
	visited[curr] = true;

	while(!q.empty())
	{
		int node = q.front();
		q.pop();
		
		cout << node << " " << endl;

		for(it = adjL[node].begin(); it < adjL[node].end(); it++)
		{
			if(!visited[*it])
			{
				q.push(*it);
				visited[*it] = true;
			}
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

	BFS(1, adjL);

	return 0;
}
