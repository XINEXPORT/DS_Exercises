#include "BST.h"

// Constructor
template <typename KeyType>
BST<KeyType>::BST() : root(nullptr), treeSize(0) {
}

// Destructor
template <typename KeyType>
BST<KeyType>::~BST() {
}

template <typename KeyType>
bool BST<KeyType>::isEmpty() const {
    return isEmpty(root);
}

template <typename KeyType>
bool BST<KeyType>::isEmpty(BSTNode *tree) const {
    return tree == nullptr;
}

template <typename KeyType>
typename BST<KeyType>::BSTNode *BST<KeyType>::newNode(KeyType key) {
    return new BSTNode(key);
}

template <typename KeyType>
typename BST<KeyType>::BSTNode *BST<KeyType>::newNode(KeyType key,
                                                      BSTNode *left,
                                                      BSTNode *right) {
    return new BSTNode(key, left, right);
}

template <typename KeyType>
bool BST<KeyType>::isLeaf(BSTNode *nodep) const {
    return !isEmpty(nodep) && isEmpty(nodep->left) && isEmpty(nodep->right);
}


//Return true if this BST contains given key, false otherwise
template <typename KeyType>
bool BST<KeyType>::contains(KeyType key) const {
    return contains(key, root);
}


 //Return true if BST rooted at tree contains given key, false otherwise
template <typename KeyType>
bool BST<KeyType>::contains(KeyType key, BSTNode *tree) const {
    if (isEmpty(tree))
        return false;
    else if (tree->key == key)
        return true;
    else if (key < tree->key)
        return contains(key, tree->left);
    else
        // key > tree->key
        return contains(key, tree->right);
}


 // Public version of Insert
 //Inserts key into the tree starting at the current root
template <typename KeyType>
void BST<KeyType>::unbalancedInsert(KeyType key)
{
    root = unbalancedInsert(key, root);
}

/*
 * Given the root of a tree,
 * return pointer to root of tree with key inserted
 *
 * Note: ALWAYS adds a leaf
 */
template <typename KeyType>
typename BST<KeyType>::BSTNode* BST<KeyType>::unbalancedInsert(
    KeyType key, BSTNode* tree)
{
    if (isEmpty(tree)) {
        return newNode(key);
    } else if (key == tree->key) {
        return tree;
    } else if (key < tree->key) {
        tree->left = unbalancedInsert(key, tree->left);
        return tree;
    } else {
        tree->right = unbalancedInsert(key, tree->right);
        return tree;
    }
}
