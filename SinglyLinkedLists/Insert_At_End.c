void Insert_end(Node** headptr, int data)
{
    Node* newNode = createNode(data);
    if(*headptr == NULL)
        *headptr = newNode;//if the list is empty the head becomes the new node
    else
    {
        Node* temp = *headptr;//b7al l head
        while(temp -> next != NULL)//traverse the list
        {
            temp = temp -> next;
        }
        temp->next = newNode;
    }
}