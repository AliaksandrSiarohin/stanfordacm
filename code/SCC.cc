#include <vector>
#include <iostream>
#include <cmath>

using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
const int UNVISITED = -1;

struct SCC {
	vvi AdjList;
	vi dfs_num, dfs_low, S, visited, scc;
	int num_scc, dfsNumberCounter, V;
	SCC(int V) : dfs_num(V, UNVISITED), dfs_low(V, 0), V(V),
			 visited(V, 0), scc(V), num_scc(0), AdjList(V, vi()),
			 dfsNumberCounter(0) {}
	void tarjanSCC(int u) {
		dfs_low[u] = dfs_num[u] = dfsNumberCounter++;
		S.push_back(u);
		visited[u] = 1;
		for (int j = 0; j < (int)AdjList[u].size(); j++) {
			int v = AdjList[u][j];
			if (dfs_num[v] == UNVISITED)
				tarjanSCC(v);
			if (visited[v])
				dfs_low[u] = min(dfs_low[u], dfs_low[v]);
		}
		if (dfs_low[u] == dfs_num[u]) {
			
			while (1) {
				int v = S.back(); S.pop_back(); visited[v] = 0;
				scc[v] = num_scc;
				if (u == v) {
					num_scc++;
				        break;
				}
		 	}
		}
 	}

	void addEdge(int u, int v){
		AdjList[u].push_back(v);
	}
	void run() {
		for (int i = 0; i < V; i++)
			if (dfs_num[i] == UNVISITED)
				tarjanSCC(i);		
	}
};
