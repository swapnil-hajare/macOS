#include <iostream>
#include <vector>

using namespace std;

#define MAX_NODES 20

int main()
{
	int n, e;
	int u, v;
	vector<int>::iterator it;

	cin >> n >> e;

	//Adjacency matrix
	vector<int> adjL[MAX_NODES];

	for(int i = 1; i <= e; i++)
	{
		cin >> u >> v;

		adjL[u].push_back(v);
		adjL[v].push_back(u);
	}
	
	cout << "Adjacency List representation: " << endl;	

	for(int i = 1; i <= n; i++)
	{
		cout << i << " -> ";
		for(it = adjL[i].begin(); it < adjL[i].end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}

	return 0;
}
