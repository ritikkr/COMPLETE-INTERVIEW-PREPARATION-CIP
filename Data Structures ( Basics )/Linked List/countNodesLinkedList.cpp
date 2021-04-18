
class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
       Node* temp = head;
       int count = 0;
       while(temp != NULL)
       {
           count++;
           temp = temp->next;
       }
    return count;
    }
};
