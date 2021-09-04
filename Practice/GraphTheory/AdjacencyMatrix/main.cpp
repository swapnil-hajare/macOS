#include <iostream>
#include <vector>

using namespace std;

#define MAX_NODES 20

int main()
{
	int n, e;
	int u, v;

	cin >> n >> e;

	//Adjacency matrix
	bool adjm[MAX_NODES][MAX_NODES];
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			adjm[i][j] = false;
		}
	}

	for(int i = 0; i < e; i++)
	{
		cin >> u >> v;
		
		// for undirected graph
		adjm[u][v] = true;
		adjm[v][u] = true;
	}

	cout << "Adjacency matrix for above graph is :" << endl;

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cout << adjm[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}
