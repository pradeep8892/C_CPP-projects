/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define merge(a,b) a##b

void fun1()
{
     printf("Hello World 1");
}
void func2(void (*ptr)())
{
    (*ptr)();
}

int main()
{
   // printf("Hello World");
   printf(" val %s \n", merge(12,1));
    void (*ptr)() = &fun1;
    func2(ptr);
  

    return 0;
}
