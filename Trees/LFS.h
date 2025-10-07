#include <iostream>
#include <vector>
#include <string>

#ifndef LFS_H
#define LFS_H

using namespace std;

struct DirectoryEntry{
    string name;
    bool is_directory;
    unsigned size;
};

struct FSNode{
    DirectoryEntry dir_ent;
    vector<FSNode *> children;
    
    static void listAll(FSNode* node, int depth = 0);
    static void printName(FSNode* node, int depth);
    static int sumDescendants(FSNode* node);
};

class LFS{
    public:
     LFS();
     ~LFS();

    private:
     FSNode *root;
};

#endif