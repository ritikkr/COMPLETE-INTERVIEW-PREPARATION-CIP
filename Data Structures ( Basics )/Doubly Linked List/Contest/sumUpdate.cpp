void sumUpdate(Node *head)
{
    //Your code here
    int sum = 0;
    Node *temp = head;
    while(temp->next != head)
    {
        sum = sum + temp->data;
        temp = temp->next;
    }
    sum = sum + head->prev->data;
    temp = head;
     while(temp->next != head)
     {
         temp->data = sum - temp->data;
         temp = temp->next;
     }
     head->prev->data = sum - head->prev->data;
}