void traverse_list(Node *head,int data)
{
    Node* newNode = createNode(data);
    Node* temp =  head;
    while(temp->next != NULL)
    {
        temp = temp -> next;
    }
    temp->next = newNode;
}