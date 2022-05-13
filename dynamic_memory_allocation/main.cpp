/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int *pointer;// =  new int();
    pointer =  new int;//
    *pointer = 123;
    printf("Hello World %d", *pointer);
    delete pointer;
    printf("\nHello World %d", *pointer);
    return 0;
}
