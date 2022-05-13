/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head = NULL;
struct Node* createNewNode(int n)
{
    struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->data = n;
    NewNode->next = NULL;
    NewNode->prev = NULL;
    return NewNode;
}
void printList(){
    struct Node* tmp = head;
    printf("\n printing List \n");
    while(tmp!=NULL){
        printf(" %d", tmp->data);
        tmp = tmp->next;
    }
}
struct Node* currNode = NULL;
void insertHeadNode(int n){
    struct Node* newNode = createNewNode(n);
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
    currNode = head;
}

void insertTailNode(int n){
    struct Node* newNode = createNewNode(n);
    if(head==NULL)
    {
        head = newNode;
       
        return;
    }
    struct Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    newNode->prev = tmp;
    tmp->next = newNode;
    tmp =  newNode;
}

int main()
{
    insertHeadNode(23);
    insertHeadNode(45);
    insertHeadNode(89);
    insertHeadNode(67);
    insertTailNode(345);
    insertTailNode(33);
    insertTailNode(55);
    insertTailNode(356);
    printList();
    printf("Hello World");

    return 0;
}

