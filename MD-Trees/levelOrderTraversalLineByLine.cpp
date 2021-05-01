#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
vector<vector<int>> levelOrder(Node* root)
{
  vector<vector<int>> res;
  if(!root) { return res; }
  queue<Node *> q;
  q.push(root);
  q.push(NULL);
  vector<int> r;
  while(q.size()>=1)
  {
      Node *curr = q.front();
      
      q.pop();
      if(curr == NULL)
      {
          res.push_back(r);
          r.clear();
          q.push(NULL);
          continue;
      }
      else
      {
          r.push_back(curr->data);
      }
      if(curr->left != NULL)
      {
          q.push(curr->left);
      }
      if(curr->right != NULL)
      {
          q.push(curr->right);
      }
      
  }
  for(int i= 0; i<res.size(); i++)
  {
      cout<<"level"<<i+1<<endl;
      for(int j = 0 ; j < res[i].size(); i++)
      {
          cout<<res[i][j]<<" ";
      }
  }
  return res;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(4);
    root->left->left = new Node(4);
    root->left->right = new Node(2);

    vector<vector<int>> vec = levelOrder(root);
    // for(vector<int> v: vec)
    // {
    //     for(int value:v)
    //     {
    //         cout<<value<<" ";
    //     }
    //     cout<<"$";
    // }


    return 0;
}