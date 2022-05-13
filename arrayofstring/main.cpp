/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

#include <stdio.h>

int main()
{
    char *names[4] = {"Ram", "Shyam","Hanuman","Lakshman"};
    printf("Hello World");
    for(int i=0;i<4;i++)
    {
        std::cout << names[i] << std::endl;
    }

    return 0;
}
