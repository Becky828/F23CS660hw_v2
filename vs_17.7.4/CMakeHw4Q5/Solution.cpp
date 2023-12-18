#include "Solution.h"
#include <algorithm>
using namespace std;


void Solution::explore(vector<vector<int>> G, vector<int> vertex, int j)
{
	visited[j] = true;
	//ccnum[j] = cc;
	previsit(j);
	//previsit(vertex);
   /// traveledPath.push_back(G[j]);

	//for (int i = 0; i < G.size(); i++)
  /*  {
		if (G[vertex[0]][j] == 1)
		{
			if (visited[j] == false)
			{
				vector<int> newVertex = { vertex[0], j };
				explore(G, newVertex, j, visited);
			}
		}
	}*/
	for (int i = 0; i < G[j].size(); i++) {

		// If some node is adjacent to the current node
		// and it has not already been visited
		if (G[j][i] == 1 && (!visited[i])) {
			explore(G, G[j, i], i);
		}
	}

	//postvisit(j);
}

void Solution::previsit(int vertex)
{
	ccnum[vertex] = cc;
	/*pre[vertex] = clock;
	clock++;*/
}

//void Solution::postvisit(int vertex)
//{
//	post[vertex] = clock;
//	clock++;
//}

//void Solution::previsit(vector<int> vertex)
//{
//   // ccnum[]
//
//}

//void Solution::postvisit(vector<int> vertex)
//{
//}

void Solution::buildGraph(vector<vector<int>>& stones)
{
	int vertical = 0;
	int horizontal = 0;

	for (int i = 0; i < stones.size(); i++) {
		for (int j = 0; j < 2; j++) {
			/* vector<int, std::allocator<int>> vertical = stones[i].;
			 vector<int, std::allocator<int>> horizontal = stones[j];*/
			 /*  int vertical = stones[i].data()[0];
				int horizontal = stones[j].data()[1];*/
			if (j == 0) {
				vertical = stones[i][j];
			}
			else {
				horizontal = stones[i][j];
				G[vertical][horizontal] = 1;
			}
			/*  int vertical = stones[i][0];
			  int horizontal = stones[0][j];*/
			  /* if (j == 1)
			   {
				   G[vertical][horizontal] = 1;
			   }*/
			   //G[vertical][horizontal] = 1;

		}
	}
}

//void Solution::buildReversedGraph(vector<vector<int>> G)
//{
//    for (int i = 0; i < G.size(); i++)
//    {
//        for (int j = 0; j < G[i].size(); j++)
//        {
//			GReversed[i][j] = G[j][i];
//		}
//	}
//}

int Solution::removeStones(vector<vector<int>>& stones)
{

	//cc = 0;
	stonesCopy = stones;
	buildGraph(stones);
	GCopy = G;
	//  buildReversedGraph(G);
	  //Refactor all dfs code to work with Graph G.
	 // clock = 0;
	init(stones);
	//vector<int> initPre(n, 0);
	//pre = initPre;
	//vector<int> initPost(n, 0);
	//post = initPost;

/*     visited.reserve(G.size());
	 ccnum.reserve(G.size());
	 for (int i = 0; i < G[0].size(); i++)
	 {
		 for (int j = 0; i < G[i].size(); j++)
		 {
			 visited[j] = false;

		 }
	 }*/


	 // for_each(G.begin(), G.end(), [](vector<int> i) {cout << i << ' '; });
	dfs();
	int ccNumSum = 0;
	for_each(ccnum.begin(), ccnum.end(), [&](int i) {
		cout << i << " ";
		ccNumSum += i;
		});

	for (int i = 0; i < ccNumSum; i++)
	{
		/*for (int j = 0; j < stonesCopy.size(); j++)*/
		//{
			/*if (GCopy[i][j] == 1)
			{*/
			//removedStones.push_back(stonesCopy[i]);
			//GCopy[i][j] = 0;
			//std::fill(GCopy[i][j].begin(), GCopy[i][j].end(), 0);
		for (int j = i + 1; j < GCopy[i].size(); j++) {
			if (GCopy[i][j] == 1)
			{
				removedStones.push_back(stonesCopy[0]);
				stonesCopy.erase(stonesCopy.begin());
				GCopy[i][j] = 0;
				//GCopy[j][i] = 0;

				int size = GCopy[j].size();
				for (int k = 0; k < size; k++)
				{
					if (GCopy[j][k] == 1) {
						removedStones.push_back(stonesCopy[0]);
						stonesCopy.erase(stonesCopy.begin());

						GCopy[k][j] = 0;
						//GCopy[j][k] = 0;

					}
					//GCopy[k][j] = 0;
					//std::fill(GCopy[j][k].begin(), GCopy[j][k].end(), 0);
				}

				//GCopy[i][k] = 0;
				//std::fill(GCopy[0][k].begin(), GCopy[0][k].end(), 0);
				std::fill(GCopy[i].begin(), GCopy[i].end(), 0);

			}
		}
		//removedStones.push_back(stonesCopy[i]);

		//int m = 3;

	}
	//}

//}

	int removedStonesSize = removedStones.size();
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

