/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <boost/lexical_cast.hpp>
#include <iostream>


#define abc "234565445"
using namespace std;

int main()
{
    string str = "123456789";
    char *str2 = "87636743";
    int a = stoi(str); //  string to value
    int b = atoi(str2);
    int c = atoi(abc);
    // int lex_int = boost::lexical_cast<int>(str);
    cout<<"using stoi: "<< a<<endl;
    cout<<"using atoi: "<< b<<endl;
    cout<<"using atoi: "<< c<<endl;
    // cout<<"using lexical cast: "<< lextring_int<<endl;

    return 0;
}