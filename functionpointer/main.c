/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int add(int a, int b)
{
    int c = (a)+(b);
    return (c);
}
int main()
{
    int (*p)(int , int);
    int (*p1)(int , int);
    p = &add;
    p1  = add;
    int d = (*p)(9,18);
    int e = p1(19,18);
    
    printf("Hello World %d %d ", d ,  e);

    return 0;
}
