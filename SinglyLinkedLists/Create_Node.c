//Define Node
/*
typedef struct Node {
    int data;
    struct Node *next;
} Node;
*/
//Create a new Node
Node* createNode(int data)
{
     Node* newNode = (Node*)malloc(sizeof(Node));
    if(!newNode)
    {
    printf("Memory allocation failed\n");
    exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}