#include <iostream>
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
 bool isSameTree(Node* p, Node* q) {
        if(p == NULL && q == NULL)
        {
            return true;
        }
        if(p->data != q->data)
        {
            return false;
        }
        
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
       
    }
int main()
{
    
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    
    Node *root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);

    cout<<isSameTree(root, root2);
    return 0;
}