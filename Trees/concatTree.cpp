#include <iostream>
#include <string>
using namespace std;

struct BinaryTreeNode{
    char data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
};

string concatTree(BinaryTreeNode *tree) {
if(tree == nullptr) {
    return "";
}
return string(1, tree->data) + concatTree(tree->left) + concatTree(tree->right);
}

int main(){
    BinaryTreeNode nT = {'X', nullptr, nullptr};
    BinaryTreeNode nS = {'X', nullptr, nullptr};
    BinaryTreeNode nI = {'O', nullptr, nullptr};
    BinaryTreeNode nR = {'X', nullptr, &nT};
    BinaryTreeNode nH = {'O', &nI, &nS};
    BinaryTreeNode nC = {'X', &nH, &nR};

    string result = concatTree(&nC);
    cout << "Concatenate the tree: " << result << endl;

    return 0;
}