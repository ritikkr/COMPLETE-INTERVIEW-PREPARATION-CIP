
int maximum(Node *head)
{
    Node *temp = head;
    int max = INT_MIN;
    while(temp != NULL)
    {
        max = (temp->data > max) ? temp->data : max;
        temp = temp->next;
    }
    return max;
}

int minimum(Node *head)
{
    Node *temp = head;
    int min = INT_MAX;
    while(temp != NULL)
    {
        min = (temp->data < min) ? temp->data : min;
        temp = temp->next;
    }
    return min;
    //Your code here
}