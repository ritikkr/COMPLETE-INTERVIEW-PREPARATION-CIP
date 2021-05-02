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
vector <int> preorder(Node* root)
{
  stack<Node *> s;
  vector<int> v;
  Node *curr = root;
  s.push(curr);
  while(s.empty()== false)
  {
    //   cout<<"Error0";
      curr = s.top();
      s.pop();
      cout<<curr->data<<" ";
      v.push_back(curr->data);
      if(curr->right != NULL)
      {
          s.push(curr->right);
        //   cout<<"Error1";
      }
      if(curr->left != NULL)
      {
          s.push(curr->left);
          
      }
  }
  cout<<"Returning something\n";
  return v;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
 
    
    vector<int> res = preorder(root);
    cout<<" PreOrder Traversal\n";
    for(auto i: res)
    {
        cout<<i<<" ";
    }
    return 0;
}