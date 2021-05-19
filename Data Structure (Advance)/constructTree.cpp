#include <iostream>
using namespace std;
int preIndex = 0;
class Node
{
public:
    int key;
    Node *left;
    Node *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};
// in[] = {20, 10, 40, 30, 50}
// pre[]= {10, 20, 30, 40, 50}
Node *cTree(int in[], int pre[], int is, int ie)
{
    if( is > ie) return NULL;
    Node *root = new Node(pre[preIndex++]);

    int inIndex;
    for(int i= is; i<=ie; i++)
    {
        if(in[i] == root->key)
        {
            inIndex = i;
            break;
        }
    }
    root->left = cTree(in, pre, is, inIndex--);
    root->right = cTree(in, pre, inIndex+1, ie);

    return root;
}
int main()
{
    

    return 0;
}