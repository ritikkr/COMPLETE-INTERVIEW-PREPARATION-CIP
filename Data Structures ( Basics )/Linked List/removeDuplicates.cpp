//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    if(head == NULL)
    {
        return NULL;
    }
   Node *curr = head; 
   while(curr->next != NULL)
   {
      if(curr->data  == curr->next->data)
      {
          curr->next = curr->next->next;
          continue;
      }
      curr = curr->next;
   }
   return head;
 // your code goes here
}