/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
void swap(int &f1, int& f2){
    int temp = f1;
    f1=f2;
    f2=temp;
}
using namespace std;

int main()
{
    int a =100, b=200;
    swap(a,b);
    int &d=a;
    d=300;
    cout<<a<<" "<<b;

    return 0;
}