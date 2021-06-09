// DOubly linked list conversion

void makeDoubly(struct Node *head)
{
    if(!head){return ; }
    //Your code here
    Node *temp1 = head;
    Node *temp2 = head->next;
    // temp->next->prev = head;
    while(temp2 != NULL)
    {
        temp2->prev = temp1;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
}
