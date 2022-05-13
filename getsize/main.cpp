/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
#define mysize(tp)  ((char*)(&tp+1) - (char*)(&tp))

int main()
{
    int arr[]={1,2,3,4,6,45,23,12,54};
    int size = *(&arr+1)-arr;
    cout<<"Hello World"<<endl;
    cout<<"Size : "<<mysize(arr)/mysize(arr[0]);
    cout<<"\nsz = "<<size;

    return 0;
}