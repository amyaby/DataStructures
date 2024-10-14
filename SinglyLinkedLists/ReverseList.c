void reverseList(Node** headRef) {
    Node* prev = NULL;
    Node* current = *headRef;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;   // Store next node
        current->next = prev;   // Reverse current node's pointer
        prev = current;         // Move prev and current one step forward
        current = next;
    }

    *headRef = prev; // Update head to the new first node
}