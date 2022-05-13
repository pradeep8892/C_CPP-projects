#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;
void PrintList(){
    struct Node* temp = head;
    printf("\n printing list \n");
    while(temp != NULL){
        printf(" %d", temp->data);
        temp = temp->next;
    }
    
}

void insert(int value, int pos)
{
    struct Node* temp1 = (struct Node*)malloc(sizeof (struct Node));
    temp1->data = value;
    temp1->next = NULL;
    if(pos==1){
        temp1->next = head;
        head = temp1;
        return;
    }
    struct Node* temp2 = head;//(struct Node*)malloc(sizeof(struct Node));
    int i = 0;
    for(i = 0; i<(pos-2); i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    
}
int main()
{
    printf("Hello");
     head = NULL;
     insert(10, 1);
     insert(13, 2);
    // insert(90,5);
     insert(24, 1);
     insert(89, 2);
    // insert(93, 4);
     PrintList();
    // 
}