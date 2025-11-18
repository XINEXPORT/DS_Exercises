//DFS.cpp

/*
//difference between a DFS Graph and DFS Tree
//is that we need to init a graph
//we also need to mark when we visited a Vertex

DFS(Vertex start):
    Mark all nodes as not visited //initialize the table
    DFS_real(start)

DFS_real(Vertex current)
    current.visited = true
    ... Do whatever you want to do with current vertex ...
    for each Vertex neighbor adjacent to current in graph:
        if not neighbor.visited: ← Otherwise like tree
            DFS_real(neighbor)
*/