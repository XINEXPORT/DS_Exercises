#ifndef BST_H
#define BST_H

#include <iostream>
#include <stdexcept>

template <typename KeyType>
class BST {
   public:
    BST();
    ~BST();

    bool isEmpty() const;
    int size() const;

    bool contains(KeyType searchKey) const;
    void insert(KeyType key);
    void remove(KeyType key);

    KeyType lookup(KeyType key) const;
    KeyType min() const;
    KeyType max() const;

    bool isLeaf(KeyType key);
    void unbalancedInsert(KeyType key);

   private:
    // Node structure
    struct BSTNode {
        KeyType key;
        BSTNode *left;
        BSTNode *right;

        BSTNode(KeyType k) : key(k), left(nullptr), right(nullptr) {
        }
        BSTNode(KeyType k, BSTNode *l, BSTNode *r) : key(k), left(l), right(r) {
        }
    };

    BSTNode *root;
    int treeSize;

    // Private helper functions
    bool isEmpty(BSTNode *tree) const;
    bool isLeaf(BSTNode *nodep) const;
    BSTNode *newNode(KeyType key);
    BSTNode *newNode(KeyType key, BSTNode *left, BSTNode *right);
    BSTNode* unbalancedInsert(KeyType key, BSTNode* tree);

    void insert(BSTNode *&node, KeyType key);
    bool contains(KeyType key, BSTNode* tree) const;
    void remove(BSTNode *&node, KeyType key);
    BSTNode *findMin(BSTNode *node) const;
    BSTNode *findMax(BSTNode *node) const;
    void destroy(BSTNode *node);
};

#endif
