// Solution.h: Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    Solution() { n = 0; cc = 0; removedStonesSize = 0; };
    /*const int neededSize;*/
    void explore(vector<vector<int>> G, vector<int> s, int vertex);
    void previsit(int vertex);
   // void postvisit(int vertex); 
   // vector<bool> visited;
    //vector< vector<int> > traveledPath;
    
    int cc;
    vector<int> ccnum;
    vector<bool> visited;

   vector<vector<int>> stonesCopy;
    vector<vector<int>> removedStones;
    int removedStonesSize;
    vector<vector<int>> GCopy;
   /* vector<int> pre;
    vector<int> post;*/
    int n;
    //int clock;

    void buildGraph(vector<vector<int>>& stones);
  //  void buildReversedGraph(vector<vector<int>> G);
    int removeStones(vector<vector<int>>& stones);
    void dfs();
    void init(std::vector<std::vector<int>>& stones);
    vector<vector<int>> G{ {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };
   // vector<vector<int>> GReversed{ {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };


};