/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define array_size  100
int top = -1;

int array[array_size] = {0};

int push(int n){
    
    if(top>=array_size-1){
        printf("\n Stack overflow");
        return 0;
    } 
    array[++top] = n;
    //top = top+1;
    return 1;
}
int pop(){
    if(top == -1) return 0;
    array[top] = 0;
    top = top-1;
    return ;
}
int isEmpty(){
    if(top == -1) return 1;
    return 0;
}
int getTopOfStack(){
    return array[top];
}
void printStack(){
    printf("\n printing stack values \n");
    for(int i = 0;i<top;i++)
    {
        printf(" %d", array[i]);
    }
}
int main()
{
    //printf("Hello World");
    push(12);
    push(14);
    push(125);
    push(127);
    push(1234);
    push(142);
    printStack();
    pop();
    pop();
    printStack();
    return 0;
}

