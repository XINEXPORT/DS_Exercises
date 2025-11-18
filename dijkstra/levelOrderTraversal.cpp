// levelOrderTraversal.cpp

#include "dijkstra.h"

/*
levelOrderTraversal
*/
void levelOrderTraversal(Node *root) {
    // Queue q
    queue<Node *> q;

    // root.dist = 0
    root->dist = 0;

    // push vertex ID to queue
    // q.enqueue(root)
    q.push(root);

    while (not q.empty()) {
        // Node curr = q.dequeue()
        Node *curr = q.front();
        q.pop();

        // for each Node child in curr.children
        for (int i = 0; i < curr->children.size(); i++) {
            Node *child = curr->children[i];

            // child.dist = curr.dis +1
            child->dist = curr->dist + 1;

            // child.parent = curr
            child->parent = curr;

            // q.enqueue(child)
            q.push(child);
        }
    }
}