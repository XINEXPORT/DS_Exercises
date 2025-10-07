#include <iostream>
using namespace std;

struct BinaryTreeNode{
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
};

int numNodes(BinaryTreeNode *tree) {
if(tree == nullptr) {
    return 0;
}
return 1 + numNodes(tree->left) + numNodes(tree->right);
}

bool isLeaf(BinaryTreeNode *tree){
    return (tree != nullptr and tree->left == nullptr and
            tree->right == nullptr);
}

int numLeaves(BinaryTreeNode *tree) {
    if(tree = nullptr) {
        return 0;
    } else if (isLeaf(tree)) {
        return 1;
    } else {
        return numLeaves(tree->left) + numLeaves(tree->right);
    }

}

int main(){
    return 0;
}