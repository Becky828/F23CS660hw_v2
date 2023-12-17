#include "Solution.h"
#include <algorithm>
using namespace std;


void Solution::explore(vector<vector<int>> G, vector<int> vertex, int j, vector<bool> visited)
{
	visited[j] = true;
	//ccnum[j] = cc;
	previsit(vertex);
   /// traveledPath.push_back(G[j]);
    
    //for (int i = 0; i < G.size(); i++)
    {
        if (G[vertex[0]][j] == 1)
        {
            if (visited[j] == false)
            {
                vector<int> newVertex = { vertex[0], j };
				explore(G, newVertex, j, visited);
			}
		}
	}
	postvisit(vertex);
}

void Solution::previsit(vector<int> vertex)
{
   // ccnum[]
}

void Solution::postvisit(vector<int> vertex)
{
}

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

int Solution::removeStones(vector<vector<int>>& stones)
{
    
        cc = 0;
        buildGraph(stones);

        //Refactor all dfs code to work with Graph G.

        int n = 6;
        vector<bool> visited(n, false);


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
       
       for (int j = 0; j <G.size(); j++)
        {
            if (visited[j] == false)
            {
                ++cc;
                explore(G, G[j], j, visited);
            }


        }

        return 0;
    }

