vector<int> displayList(Node *head)
{
    vector<int> v;
    Node* temp = head;
    while(temp != NULL)
    {
        v.push_back(temp->data);
       temp =temp->next;
    }
   
    return v;
}
