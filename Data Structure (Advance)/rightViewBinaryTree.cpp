 vector<int> rightView(Node *root)
    {
       queue<Node* > q;
       vector<int> v;
       if(!root)
       {
           return v;
       }
       q.push(root);
       while(!q.empty())
       {
           int size = q.size();
           for(int i= 1; i<=size; i++)
           {
               Node *curr = q.front();
               q.pop();
               if(i == size)
               {
                   v.push_back(curr->data);
               }
               if(curr->left) { q.push(curr->left); }
               if(curr->right) { q.push(curr->right); }
               
           }
       }
       return v;
    }