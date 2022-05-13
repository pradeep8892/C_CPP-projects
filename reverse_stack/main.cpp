/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stack>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};

Node* head=NULL;

void Reverse(){
    if(head==NULL)return;
    std::stack<struct Node*>s ;
    Node* temp = head;
    while(temp != NULL){
        s.push(temp);
        temp = temp->next;
    }
    temp = s.top(); head = temp;
    s.pop();
    while(!s.empty()){
        temp->next = s.top();
        s.pop();
        temp = temp->next;
        
    }
    temp->next = NULL;
}
int main()
{
    printf("Hello World");

    return 0;
}
