#include <iostream>
using namespace std;

struct BinaryTreeNode{
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
};

int sumTree(BinaryTreeNode *tree) {
if(tree == nullptr) {
    return 0;
}
return tree->data + sumTree(tree->left) + sumTree(tree->right);
}

int main(){
    BinaryTreeNode n5 = {5, nullptr, nullptr};
    BinaryTreeNode n6 = {6, nullptr, nullptr};
    BinaryTreeNode n4 = {4, nullptr, nullptr};
    BinaryTreeNode n3 = {3, nullptr, &n6};
    BinaryTreeNode n2 = {2, &n4, &n5};
    BinaryTreeNode n1 = {1, &n2, &n3};

    cout << "Sum of the tree: " << sumTree(&n1) << endl;

    return 0;
}