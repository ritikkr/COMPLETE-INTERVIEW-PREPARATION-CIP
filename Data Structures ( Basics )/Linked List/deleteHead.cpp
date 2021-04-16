Node * deleteHead(Node *head)
{
    if(head == NULL or head->next == NULL)
    {
        return NULL;
    }
    head = head->next;
    return head;
}
