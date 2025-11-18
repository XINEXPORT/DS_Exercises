// naiveShortestPathQueue.cpp

#include "dijkstra.h"

/*
naiveShortestPathQueue
a naive unweighted shortest path with queue
*/
void naiveShortestPathQueue(Graph &g, int source) {
    vector<Vertex> vertices(g.numVertices);
    queue<int> q; //queue of vertex IDs

    // for each Vertex v
    for (int i = 0; i < g.numVertices; i++) {
        vertices[i].dist = -1;
        vertices[i].prev = -1;
        vertices[i].known = false;
    }
    // s.dist = 0;
    vertices[source].dist = 0;

    //push vertex ID to queue
    //q.enqueue(s)
    q.push(source);

    while(not q.empty()){
        // Vertex v = q.dequeue();
        int v = q.front();
        q.pop();

        //v.known = true
        vertices[v].known = true;

        //for each Vertex w adjacent to v in graph
        for (int j = 0; j < g.adjList[v].size(); j++) {
            int w = g.adjList[v][j].to;

            //if (w.dist == INFINTY and not w.known)
            if (vertices[w].dist == -1 and not vertices[w].known) {
                //w.dist = v.dist + 1
                vertices[w].dist = vertices[v].dist + 1;
                // w.prev = v
                vertices[w].prev = v;
                //q.enqueue(w)
                q.push(w);
            }
        }

    }
}