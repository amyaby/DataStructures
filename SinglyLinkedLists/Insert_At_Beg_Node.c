//hna khasek define w create node b3da

// Function to insert a node at the beginning of the list
Node* insert_begin(Node** head, int data) 
{
    Node* newNode = createNode(data); // Create a new node with the provided data
    newNode->next = *head;// Set the new node's next to the current head ghadi tweli tpointi lhead!
    *head = newNode;
    return newNode;                   // Return the new node, which becomes the new head
}
//method with t_list is more genral
void	insert_begin(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;//points to the list(head)
	*lst = new;
}
int main() {
    Node* head = NULL;  // Initialize the head of the linked list as NULL

    // Insert nodes at the beginning
    head = insert_begin(&head, 10);
    head = insert_begin(&head, 20);
    head = insert_begin(&head, 30);

    // Print the list
    printList(head);  // Output: 30 -> 20 -> 10 -> NULL

    return 0;
}
//output
Before Insertion:   head -> [20] -> [10] -> NULL

After Insertion:    head -> [30] -> [20] -> [10] -> NULL
