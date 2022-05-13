/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int top = -1;
int arr[100];
int MAX_SIZE = 100;

int isEmpty()
{
    if(top>-1)
    return 0;
    else return 1;
}

int pop()
{
    if(!isEmpty())
    {
        top = top-1;
        return arr[top];
    }
    else printf(" stack is empety");
}

int push(int data)
{
    if(top<MAX_SIZE)
    {
        arr[top] = data;
        top = top+1;
        return 1;
    }
    else printf(" stack is full");
}
int peek()
{
    if(top<0)
    {
    printf(" stack is empety");
    return 0;
        
    }
    else return arr[top];
}


int main()
{
    //printf("Hello World");
    pop();
    peek();
    push(100);
    push(10);
    push(111);
    push(200);
    push(210);
    push(2111);
    while(!isEmpty())
    {
        printf("\n %i", pop());
    }
    pop();
    return 0;
}
