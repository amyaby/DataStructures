//Function to print the data of a linked list
void printList(Node* head)//head howa awl node that points to the data of the firstnode of the linked list
{
    Node* temp =  head;//temp points to the first node (same as head)
    while(temp != NULL)
    {
        printf("%d -> ",temp->data);//print the data of the current node
        temp = temp->next;//move to the next node
    }
    printf("NULL\n");//indicate the end of the list add NULL at the end of the list
}
int main()
{
    Node* head = createNode(10);
    head -> next = createNode(20);
    head -> next -> next = createNode(30);
    printList(head);//print the linked list
    return 0;
}
//output
head->[10| next]->[20| next]->[30| next]->NULL