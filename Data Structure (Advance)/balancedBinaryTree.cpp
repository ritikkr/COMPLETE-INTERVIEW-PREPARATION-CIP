#include <iostream>
#include <algorithm>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        data = x;
        left = right = NULL;
    }
};
int height(TreeNode *root)
{
    if(!root)
    {
        return 0;
    }
    return 1+max(height(root->left), height(root->right));
}
bool isBalancedTree(TreeNode *root)
{
    if(!root){
        return true;
    }
    int lh = height(root->left);
    int rh = height(root->right);
}
TreeNode *balancedTree()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    return root;
}
TreeNode *notBalancedTree()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(3);
    root->left->left->left = new TreeNode(4);
    root->left->left->right = new TreeNode(4);

    return root;
}
int main()
{
    TreeNode *broot = balancedTree();
    TreeNode *unbroot = notBalancedTree();

    cout<<isBalancedTree(broot)<<endl;
    cout<<isBalancedTree(unbroot)<<endl;
    return 0;
}