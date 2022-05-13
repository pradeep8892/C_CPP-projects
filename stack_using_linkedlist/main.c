#include <stdio.h>

struct Node{
    int data;
    struct Node* link;
}; 
struct Node* top = NULL;

void push(int x){
    struct Node* tmp = (struct Node*)malloc(sizeof(struct Node));
    tmp->data = x;
    tmp->link = top;
    top = tmp;
    
}
void pop(){
    if(top==NULL){
      printf("\n stack is empety ;");
      return;
    }
    struct Node* tmp = top;
    top = top->link;
    free(tmp);
}
void printList(){
    struct Node* tmp = top;
    printf("\n print stack");
    while(tmp !=NULL){
        
        printf(" %d", tmp->data);
        tmp = tmp->link;
    }
}

int main()
{
    push(14);
    push(13);
    push(15);
    push(132);
    push(156);
    printList();
    pop();
    printList();
    //printf("Hello World");

    return 0;
}
