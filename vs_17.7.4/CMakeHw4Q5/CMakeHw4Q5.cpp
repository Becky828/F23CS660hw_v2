// CMakeHw4Q5.cpp : Defines the entry point for the application.
//

#include "CMakeHw4Q5.h"

using namespace std;

int main()
{

	//vector<vector<int>> stones = [[0, 0], [0, 1], [1, 0], [1, 2], [2, 1], [2, 2]]
	stones.push_back({ 0,0 });
	stones.push_back({ 0,1 });
	stones.push_back({ 1,0 });
	stones.push_back({ 1,2 });
	stones.push_back({ 2,1 });
	stones.push_back({ 2,2 });
	Solution solution;
	solution.removeStones(stones);
	cout << solution.removedStonesSize << endl;
	return 0;
}

