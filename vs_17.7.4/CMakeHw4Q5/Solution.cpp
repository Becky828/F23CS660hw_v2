#include "Solution.h"




void Solution::explore(vector<int> s)
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
    
        int cc = 0;
        buildGraph(stones);
        vector<bool> visited(stones.size());
        vector<int> ccnum(stones.size());
        for (int i= 0; i < stones.size(); i++)
        {
            visited[i] = false;

        }

        for (int j = 0; j < stones.size(); j++)
        {
            if (visited[j] == false)
            {
                ++cc;
                explore(stones[j]);
            }


        }

        return 0;
    }

