// dijkstra.cpp

#include "dijkstra.h"

/*
dijkstra
*/
void dijkstra(Graph &g, int source) {
    vector<Vertex> vertices(g.numVertices);

    for (int i = 0; i < g.numVertices; i++) {
        vertices[i].id = i;

        if (i != source) {
            vertices[i].dist = INT_MAX;
            vertices[i].prev = -1;
            vertices[i].known = false;
        }
    }

    vertices[source].dist = 0;

    // create prio queue here
    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   greater<pair<int, int>>>Q;

    Q.push({0, source});

    while (not Q.empty()) {
        int u = Q.top().second;
        Q.pop();

        if (vertices[u].known) continue;
        vertices[u].known = true;

        for (int i = 0; i < g.adjList[u].size(); i++) {
            Edge edge = g.adjList[u][i];

            int v = edge.to;
            int alt = vertices[u].dist + edge.weight;

            if (not vertices[v].known and alt < vertices[v].dist) {
                vertices[v].dist = alt;
                vertices[v].prev = u;
                Q.push(make_pair(alt, v));
            }
        }
    }
}

int main() {
    return 0;
}