
#include <stdio.h>
#include<iostream>
#include <cmath>

int main()
{
    std::cout << "enter temperature in degree celcius" << std::endl;
    double temp_d = 0;
    std::cin>>temp_d;
    
    double fahrenheit = (9.0 / 5) * temp_d + 32;
    std::cout<<" temperature in fahrenheit "<<fahrenheit<<std::endl;
 

    return 0;
}
