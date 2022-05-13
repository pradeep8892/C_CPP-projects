/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    uint16_t a = 0xFF01;
    std::cout << " Data in dec " <<std::showbase<<std::dec<< a<< std::endl;
    std::cout << " Data in hex " <<std::showbase<<std::hex<< a<< std::endl;
    std::cout << " Data in oct " <<std::showbase<<std::oct<< a<< std::endl;
    std::cout << " Data in binary " <<std::showbase<<std::bitset<16>(a)<< std::endl;
    cout<<"Hello World";

    return 0;
}