void deleteNodeByValue(Node** headref,int value)
{
    Node* temp = *headref;//temp node points to the value that head points to
    Node* prev = NULL;
//Check if the head node holds the value to be deleted
if(temp != NULL && temp->data == value)
{
    *headref = temp->next;//if temp fiha l value li bghina nmes7o we move head ref to point to the next value that temp will point to w katwli hadihya lhead jdid dyal lst
    free(temp);//fach kansaliw mn temp kanmes7ouh 7it salat khdmto
    return;//exit
}
// Traverse the list to find the node with the value
while(temp != NULL && temp->data != value)
{
    prev = temp;//MOVE PREV TO THE CURRENT NODE
    temp = temp->next;//MOVE TEMP TO THE NEXT NODE
}
//If the value was not found in the list
if(temp == NULL)
    return NULL;
// temp now points to the node with the value
prev->next = temp->next;//kanlinkiw prev m3a vnode li jat mora node li msa7na
free(temp);
}