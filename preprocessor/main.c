/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define merge(a,b) a##b
#define toString(c) #c

int main()
{
    printf("Hello World");
    int asd = merge(90,54);
    float val = 908.545;
    char *sf = toString(int);
    printf("%d %s", asd, sf);

    return 0;
}
