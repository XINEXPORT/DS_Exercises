// naiveShortestPath.cpp

#include "dijkstra.h"

/*
naiveShortestPath
a naive unweighted shortest path
*/
void naiveShortestPath(Graph &g, int source) {
    vector<Vertex> vertices(g.numVertices);

    // for a start node s in a graph
    // naive_unweighted_shortest_paths(Vertex S)
    for (int i = 0; i < g.numVertices; i++) {
        vertices[i].dist = -1;  // inifinite value
        vertices[i].prev = -1;  // infinite value
        vertices[i].known = false;
    }
    // s.dist = 0;
    vertices[source].dist = 0;

    // for (int currDist = 0; currDist < NUM_VERTICES; currDist++)
    for (int currDist = 0; currDist < g.numVertices; currDist++) {
        // for each Vertex v in graph
        for (int v = 0; v < g.numVertices; v++) {
            // if (not v.known and v.dist == currDist)
            if (not vertices[v].known and vertices[v].dist == currDist) {
                // v.known = true
                vertices[v].known = true;

                // for each Vertex with adjacent to v
                for (int j = 0; j < g.adjList[v].size(); j++) {
                    int w = g.adjList[v][j].to;

                    // if(w.dist == INFINITY)
                    if (vertices[w].dist == -1) {
                        // w.dist = currDist + 1
                        vertices[w].dist = currDist + 1;
                        // w.prev = v
                        vertices[w].prev = v;
                    }
                }
            }
        }
    }
}