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
void deleteList(int n){
    struct Node* temp = head;
    int i;
    if(n==1)
    {
        head = temp->next;
        free(temp);
        return;
    }
    for (i=0;i<n-2;i++)
    {
        temp = temp->next;
    }
    struct Node* temp1 = temp->next;
    temp->next = temp1->next;
    head = temp;
    free(temp1);
    
}
//struct Node* temp2 = NULL;
struct Node* lll = NULL;
void printreverseList(struct Node* temp){
    //struct Node* temp = head;
   // struct Node* temp1 = NULL;
    if(temp->next==NULL)
    {
        head = temp;
        return;  
    }
        // head = temp;
    printreverseList(temp->next);
   // printf(" %d", temp->data);
   
    struct Node* q = temp->next;
    q->next = temp;
    temp->next = NULL;
//  temp->next->next = temp;

    //head = temp1;
}

void ReverseList(){
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next;// = head;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
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
     insert(78, 1);
     insert(45, 2);     
    // insert(93, 4);
     PrintList();
     deleteList(2);
      PrintList();
      printf("\n reverse list\n");
      printreverseList(head);
     PrintList();
    // ReverseList();
     // PrintList();
    // 
}

