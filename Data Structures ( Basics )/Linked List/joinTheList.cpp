
Node * joinTheLists(Node * head1, Node * head2)
{
    Node *tail = head1;
    while(tail->next != NULL)  //  will stop at last node
    {
        tail = tail->next;
    }
    tail->next = head2;
    return head1;
}
    