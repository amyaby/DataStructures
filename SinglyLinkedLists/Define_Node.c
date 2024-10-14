
// Methode 1

struct Node{
    int data;//the data (content) stored in the node
    struct Node* next;//Pointer to the next node
}


// Methode 2

typedef struct Node{
    int data;//the data (content) stored in the node
    struct Node *next;//Pointer to the next node
} Node;
//to be more general
// write : void* content instead of int data to be more general(so u can store any type of data)