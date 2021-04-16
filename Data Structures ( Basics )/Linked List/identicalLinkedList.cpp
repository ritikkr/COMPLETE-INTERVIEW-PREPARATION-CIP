
// https://practice.geeksforgeeks.org/problems/identical-linked-lists/0/?track=DSA-Foundation-Linked-List&batchId=264

bool areIdentical(struct Node *head1, struct Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    while(temp1 != NULL || temp2 != NULL)
    {
        if(temp1->data != temp2->data)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;
    // Code here
}