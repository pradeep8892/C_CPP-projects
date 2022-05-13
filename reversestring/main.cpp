/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void reverseString(string& sr)
{
    int len = sr.length();
    for(int i =0 ; i<len/2; i++){
        swap(sr[i], sr[len-i-1]);
    }
}

int main()
{
    cout<<"Hello World";
    string str = "I am shyam";
    reverseString(str);
    cout<<"\n"<<str;

    return 0;
}