// dijkstra.h

#include <iostream>
#include <vector>
#include <queue>
#include <limits>

#ifndef DIJKSTRA_H
#define DIJKSTRA_H

typedef int ElemType;
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

struct Node {
    ElemType data;
    vector<Node *> children;
    Node *parent;
    int dist;
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