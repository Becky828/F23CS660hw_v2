// Solution.h: Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    /*const int neededSize;*/
    void explore(vector<int> s);
    void buildGraph(vector<vector<int>>& stones);
    int removeStones(vector<vector<int>>& stones);
    vector < vector<int>>     G{ {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };


};