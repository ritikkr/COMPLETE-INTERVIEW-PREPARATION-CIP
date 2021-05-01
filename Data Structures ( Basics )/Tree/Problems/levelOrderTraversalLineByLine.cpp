
//Function to return the level order traversal line by line of a tree.
vector<vector<int>> levelOrder(Node* root)
{
   vector<vector<int>> res;
   
  if(root == NULL){
      return res;
      } 
  queue<Node *> q;
  q.push(root);

  vector<int> r;
  
  while(!q.empty())
  {
      int size = q.size();
      while(size--)
      {
          Node *curr = q.front();
          q.pop();
          r.push_back(curr->data);
          if(curr->left != NULL) { q.push(curr->left); }
          if(curr->right != NULL) { q.push(curr->right); }
          
      }
      res.push_back(r);
      r.clear();
      
  }
  
  return res;
}


