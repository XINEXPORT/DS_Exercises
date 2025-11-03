// graph.h

#include <iostream>
#include <string>
#include <vector>

#ifndef GRAPH_H
#define GRAPH_H

struct Vertex {
    std::string cityName;
    float latitude, longitude;
};

class Graph {
   public:
   private:
    std::vector<Vertex> vertices;
};

#endif