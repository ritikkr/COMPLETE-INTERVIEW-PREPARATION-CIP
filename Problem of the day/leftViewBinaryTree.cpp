vector<int> printLeftView(Node *root)
{
    vector<int> res;
    if(!root)
    {
        return res;
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
            if(i ==1){ res.push_back(curr->data); }
            if(curr->left!= NULL){ q.push(curr->left); }
            if(curr->right!= NULL){ q.push(curr->right); }
            
        }
        
    }
}
