/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void print(char *cc){
    printf("\n Hello World %s", cc);
}

int Add(int a, int b)
{
    return (a+b);
}
int main()
{
    int (*p)(int, int);// 1st type
    p = &Add;
    int c = (*p)(2,3);
    printf(" %d", c);
    
    int (*p1)(int, int);// function pointer
    p1 = Add;
    int cc = p1(12,23);
    printf("\n sum %d", cc); // 2nd type

    void (*ptr)(char*); // void function pointer
    ptr = &print;
    ptr(" Ram");
    return 0;
}
