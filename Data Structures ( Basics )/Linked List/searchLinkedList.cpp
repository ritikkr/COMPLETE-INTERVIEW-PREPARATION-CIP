bool searchLinkedList(Node *head, int x)
{
   Node *temp = head;
    while(temp != NULL)
    {
     if(temp->data == x) return true;
        temp = temp->next;
    }
    return false;
}