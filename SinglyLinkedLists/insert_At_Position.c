void insertAtPosition(Node** headRef, int data, int position)
{
    Node* newNode = createNode(data);
    if(position = 0)//b7al inset at beginning
    {
        newNode->next = *headRef;
        *headRef = newNode;
        return;
    }
    Node* temp = *headRef;
    if (temp == NULL) 
    {
        printf("Position out of bounds\n");
        return;
    }
    int i = 0;
    while(i < position - 1)//one position before a specific target position where you want to insert a new node
    {
         temp = temp->next;
         i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}