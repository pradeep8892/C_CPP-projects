/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void print(char *c)
{
    while(*c != '\0' )
    {
        printf("%c", *c);
        c++;
    }
}

int main()
{
   // printf("Hello World");
    char a[10] = "ASDFGHJKL";
    print(a);
    
    char B[2][3] = {{'A','B','C'},{'D','E','F'}};
    int (*P)[3] = B;
    printf("\n %d %d ", &B[0], B);
    printf("\n %d %d %d", *B, B[0], &B[0][0]);
    printf("\n %d %d", B+1, &B[1]);//, &B[0][0]);    
    printf("\n %d %d %d", *(B+1), B[1], &B[1][0]);
    printf("\n %d %d %d", *(B+1)+2, B[1]+2, &B[1][2]);
    return 0;
}
