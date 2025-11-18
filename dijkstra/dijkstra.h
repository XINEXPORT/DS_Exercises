// dijkstra.h

#include <iostream>
#include <vector>
#include <queue>
#include <limits>

#ifndef DIJKSTRA_H
#define DIJKSTRA_H

using namespace std;

struct Vertex {
    int id;
    int dist;
    int prev;
    bool known;
};

struct Edge {
    int to;
    int weight;
};

class Graph {
   public:
    int numVertices;
    vector<vector<Edge>> adjList;

    Graph(int n) {
        numVertices = n;
        adjList.resize(n);
    }
};

#endif