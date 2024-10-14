void deleteAtPosition(Node** headRef, int position)
{
    if(*headRef == NULL)//if the list is empty(head is NULL)
        return;
    Node* temp = *headRef;//temp is a temporary pointer used to traverse the list. Initially, it points to the head of the list.
    if(position == 0)//it means we are deleting the first node (head node)
    {
        *headRef = temp->next;//updates the head to the second node (temp->next).
        free(temp);
        return;
    }
    int i = 0;
    while(temp != NULL && i < position - 1)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)//he position is out of bounds ||  there is no node to delete at the given position
        return;
    Node* next = temp->next->next;// stores the pointer to the node after the one being deleted.
    free(temp->next);//deletes the node at position
    temp->next = next;//updates the link of the (position-1)th node to skip the deleted node and point to the next node.
}