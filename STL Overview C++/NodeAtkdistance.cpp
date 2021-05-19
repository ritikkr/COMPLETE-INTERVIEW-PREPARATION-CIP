#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
void nodeAtDistanceK(Node* root,int k)
{
    if(root == NULL)
    {
        return ;
    }
    if(k == 0) { cout<<root->data<<" "; }
    else 
    {
        nodeAtDistanceK(root->left, k-1);
        nodeAtDistanceK(root->right, k-1);
    }
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    int k = 1;
    nodeAtDistanceK(root, k);
    return 0;
}