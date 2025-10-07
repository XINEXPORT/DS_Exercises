#include "LFS.h"
#include <iostream>
using namespace std;

/*
Print out all listing like 'ls -R' or "tree"
with identation proportinal to depth of file/directory
*/
void FSNode::listAll(FSNode* node, int depth) {
    if (node == nullptr) return;

    printName(node, depth);

    for (FSNode* child : node->children) {
        listAll(child, depth + 1);
    }
}

void FSNode::printName(FSNode* node, int depth) {
    for (int i = 0; i < depth; i++)
        cout << "  ";

    cout << (node->dir_ent.is_directory ? "[D] " : "[F] ")
         << node->dir_ent.name << endl;
}

int FSNode::sumDescendants(FSNode* node) {
    if (node == nullptr) return 0;

    int total = 0;
    for (FSNode* child : node->children) {
        total += 1 + sumDescendants(child);
    }
    return total;
}