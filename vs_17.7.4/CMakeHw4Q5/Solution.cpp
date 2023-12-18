#include "Solution.h"
#include <algorithm>
using namespace std;


void Solution::explore(vector<vector<int>> G, vector<int> vertex, int j)
{
	visited[j] = true;
	previsit(j);
	 
	for (int i = 0; i < G[j].size(); i++) {

		// If some node is adjacent to the current node
		// and it has not already been visited
		if (G[j][i] == 1 && (!visited[i])) {
			explore(G, G[j, i], i);
		}
	}

}

void Solution::previsit(int vertex)
{
	ccnum[vertex] = cc;
}


void Solution::buildGraph(vector<vector<int>>& stones)
{
	int vertical = 0;
	int horizontal = 0;

	for (int i = 0; i < stones.size(); i++) {
		for (int j = 0; j < 2; j++) {			
			if (j == 0) {
				vertical = stones[i][j];
			}
			else {
				horizontal = stones[i][j];
				G[vertical][horizontal] = 1;
			}			
		}
	}
}

int Solution::removeStones(vector<vector<int>>& stones)
{

	stonesCopy = stones;
	buildGraph(stones);
	GCopy = G;
	init(stones);
	dfs();
	int ccNumSum = 0;
	for_each(ccnum.begin(), ccnum.end(), [&](int i) {
		//cout << i << " ";
		ccNumSum += i;
		});

	for (int i = 0; i < ccNumSum; i++)
	{

		for (int j = i + 1; j < GCopy[i].size(); j++) {
			if (GCopy[i][j] == 1)
			{
				removedStones.push_back(stonesCopy[0]);
				stonesCopy.erase(stonesCopy.begin());
				GCopy[i][j] = 0;

				int size = GCopy[j].size();
				for (int k = 0; k < size; k++)
				{
					if (GCopy[j][k] == 1) {
						removedStones.push_back(stonesCopy[0]);
						stonesCopy.erase(stonesCopy.begin());
						GCopy[k][j] = 0;
					}
				}

				std::fill(GCopy[i].begin(), GCopy[i].end(), 0);

			}
		}


		
	}

	removedStonesSize = removedStones.size();
	return removedStonesSize;
}
void Solution::dfs()
{

	for (int j = 0; j < G.size(); j++)
	{
		if (visited[j] == false)
		{
			++cc;
			explore(G, G[j], j);
		}
	}
}

void Solution::init(std::vector<std::vector<int>>& stones)
{
	n = stones.size();
	vector<bool> initVisited(n, false);
	visited = initVisited;
	vector<int> initCCNum(n, 0);
	cc = 0;
	ccnum = initCCNum;
}

