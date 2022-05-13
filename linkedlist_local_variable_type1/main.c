#include <stdio.h>

struct Node
{
  int data;
  struct Node *next;
};

//struct Node *head;

struct Node* insert (struct Node* head, int x)
{
  struct Node *temp = (struct Node*)malloc(sizeof (struct Node));
  /*(*temp).data = x;
     (*temp).next = NULL; */
  /* Or we can also write as following */
  temp->data = x;
  temp->next = head;
  head = temp;
  return head;
}

void printList (struct Node* head)
{
  struct Node *temp = head;
  printf ("List is: ");
  while (temp != NULL)
    {
      printf (" %d ", temp->data);
      temp = temp->next;
    }
}

int main ()
{
  int i, x, y;
  printf ("How many number you want to entert\n");
  scanf ("%d", &x);
  struct Node *head = NULL;
  //printf("Hello World %d",x);
  for (i = 0; i < x; i++)
    {
      printf ("\nENTER THE NUMBER INTO THE LIST\n");
      scanf ("%d", &y);
      head = insert (head, y);
      printList (head);
    }


  return 0;
}
