#include "Solution.h"




void Solution::explore(vector<int> s)
{
}

int Solution::removeStones(vector<vector<int>>& stones)
{
    {
        int cc = 0;
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
                //previsit
                //ccnum[i] = cc;
                explore(stones[j]);
            }


        }

        return 0;
    }
}
