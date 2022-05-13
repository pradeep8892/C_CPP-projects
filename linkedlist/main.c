/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Node{// linked list representation
   int data;
   struct Node *next;
};
void printList(struct Node *m)
{
    while(m != NULL)
    {
        printf("\n %i", m->data);
        m = m->next;
    }
}
void fun1(struct Node* head)// print list in reverse order
{
  if(head == NULL)
    return;
 // printf("tes %d  ", head->data);
  fun1(head->next);
  printf("%d  ", head->data);
}
int main()
{
    struct Node* head = NULL;
    struct Node* third = NULL;
    struct Node* second = NULL;
    
    head = (struct Node*)malloc(sizeof(struct Node));  
    second = (struct Node*)malloc(sizeof(struct Node)); 
    third = (struct Node*)malloc(sizeof(struct Node)); 
    head->data = 12;
    head->next = second;
    second->data = 100;
    second->next = third;
    third->data = 200;
    third->next = NULL;
    
    fun1(head);
    
    //printList(head);
  
    printf("Hello World");

    return 0;
}

