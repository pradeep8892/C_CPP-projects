/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stack>
#include <string.h>
using namespace std;
#define MAX_LIMIT 20 

void Reverse(char* c, int len){
    std::stack<char> s;
    for(int i=0; i<len;i++)
    {
        s.push(c[i]);
    }
    for(int i = 0;i<len;i++){
        c[i] = s.top();
        s.pop();
    }
}

int main()
{
    //char c[50] = "HELLO";
    printf("Enter a string");
    //gets(c);


    char c[MAX_LIMIT]; 
    fgets(c, MAX_LIMIT, stdin); 
    
    Reverse(c, strlen(c));
    printf("\n Reverse string:  %s", c);

    return 0;
}
