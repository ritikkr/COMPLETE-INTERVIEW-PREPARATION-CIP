#include <iostream>
#include <queue>
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
void printRightView(Node *root)
{
    if(!root)
    {
        cout<<"No element present";
    }
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        int n= q.size();
        for(int i = 1 ; i<=n; i++)
        {
            Node *curr = q.front();
            q.pop();
            if(i ==n){ cout<<curr->data<<" "; }
            if(curr->left!= NULL){ q.push(curr->left); }
            if(curr->right!= NULL){ q.push(curr->right); }
            
        }
        
    }
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
 
    cout << "Right View  of binary tree is \n";
    printRightView(root);  

    return 0;
}