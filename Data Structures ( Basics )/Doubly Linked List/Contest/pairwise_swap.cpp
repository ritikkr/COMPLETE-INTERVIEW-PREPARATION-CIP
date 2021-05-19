struct Node* pairwise_swap(struct Node* head)
{
    // your code here
    Node *temp = head;
    int count = 0;
    while(temp->next != NULL)
    {
        if(count%2 == 0)
        {
            int d = temp->data;
        temp->data = temp->next->data;
        temp->next->data = d;
        }
        count++;
        temp = temp->next;
    }
    return head;
}