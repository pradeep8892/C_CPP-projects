/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bitset>
#include <iomanip>

using namespace std;

int main()
{
    uint16_t a = 0x0000FF10;
    uint16_t b = 0x0000FF11;
    uint16_t c = 0x0000FFFF;
    std::cout <<std::setw(5)<< "Data" << std::endl;
    std::cout << "a  " <<std::showbase<<std::setw(10)<<std::bitset<16>(a)<< std::endl;
    std::cout << "b  " <<std::showbase<<std::setw(10)<<std::bitset<16>(b)<< std::endl;
    std::cout << "c  " <<std::showbase<<std::setw(10)<<std::bitset<16>(c)<< std::endl;
    // Right shift 4 bit
    a = a>>4;
    // left shift 3 bit
    b = b<<3;
    // Right shift 2 bit
    c >>=2;
    // left shift 3 bit
    b<<=3;
        std::cout <<std::setw(5)<< "Shifted Data" << std::endl;
    std::cout << "a  " <<std::showbase<<std::setw(10)<<std::bitset<16>(a)<< std::endl;
    std::cout << "b  " <<std::showbase<<std::setw(10)<<std::bitset<16>(b)<< std::endl;
    std::cout << "c  " <<std::showbase<<std::setw(10)<<std::bitset<16>(c)<< std::endl;
    
    // set 2nd and 4th bit
    a |= 0b00001010;
    // set 8th and 10th bit
    b = b|0b1010000000;
    // reset 4th bit
    c = c&(~0b1000);
    
    std::cout <<std::setw(5)<< "Set rest bit Data" << std::endl;
    std::cout << "a  " <<std::showbase<<std::setw(10)<<std::bitset<16>(a)<< std::endl;
    std::cout << "b  " <<std::showbase<<std::setw(10)<<std::bitset<16>(b)<< std::endl;
    std::cout << "c  " <<std::showbase<<std::setw(10)<<std::bitset<16>(c)<< std::endl;    
    return 0;
}