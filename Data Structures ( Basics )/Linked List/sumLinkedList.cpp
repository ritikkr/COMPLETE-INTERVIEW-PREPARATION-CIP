int sumOfElements(Node *head)
{
   Node *temp = head;
   int sum = 0;
   while(temp != NULL)
   {
       sum += temp->data;
       temp = temp->next;
   }
   return sum;
}
