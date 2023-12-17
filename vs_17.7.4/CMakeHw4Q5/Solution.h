// Solution.h: Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    /*const int neededSize;*/
    void explore(vector<vector<int>> G, vector<int> s);
    void previsit(vector<int> s);
    void postvisit(vector<int> s);
    vector<bool> visited;
    vector< vector<int> > traveledPath;
    int cc;
    vector<int> ccnum;

    void buildGraph(vector<vector<int>>& stones);
    int removeStones(vector<vector<int>>& stones);
    vector<vector<int>> G{ {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };


};