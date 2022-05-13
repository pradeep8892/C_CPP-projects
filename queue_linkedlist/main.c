#include <stdio.h>
#include <stdbool.h>
struct Node{
    int data;
    struct Node* link;
};
struct Node* createNode(int x){
    struct Node* tmp = (struct Node*)malloc(sizeof(struct Node));
    tmp->data = x;
    tmp->link = NULL;
    return tmp;
}
struct Node* front = NULL;
struct Node* rear = NULL;
bool isEmpty(){
    return (front ==NULL&& rear==NULL);
}
int Front(){
    if(front == NULL){
        printf("Error: Queue is is Empty");
        return -1;
    }
    return front->data;
}
void EnQueue(int x){
    if(isEmpty()){
        front = createNode(x);
        rear = front;
    }else{
        struct Node* tmp = createNode(x);
        rear->link = tmp;
        rear = tmp;
    }
}
void DeQueue(){
    struct Node* tmp = front;
    if(front==NULL){
        printf(" Queue is Empty");
        return;
    }
    if(front==rear){
        front=rear=NULL;     
    }
    else{
        front = front->link;
    }
   // free(tmp);
}
void printQueue(){
    struct Node* tmp = front;
    printf("\n printing Queue");
    while(tmp!=NULL){
        printf(" %d", tmp->data);
        tmp = tmp->link;
    }
}
int main()
{
   // printf("Hello World");
    EnQueue(12);
    EnQueue(13);
    EnQueue(14);
    EnQueue(15);
    EnQueue(16);
    printQueue();
    DeQueue();
    printQueue();
    return 0;
}
