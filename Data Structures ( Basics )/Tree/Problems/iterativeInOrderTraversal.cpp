#include <iostream>
#include <stack>
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
void inOrderTraversal(Node *root)
{
    stack<Node *> s;
    Node *curr = root;
    while(curr != NULL || s.empty() == false){
        while(curr!= NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        Node *top = s.top();
        s.pop();
        cout<<top->data<<" ";
        curr = curr->right;

    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
 
    inOrderTraversal(root);

    return 0;
}