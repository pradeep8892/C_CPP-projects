/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>

class Test {
  int value;
  public:
  
  Test(int v=0){value = v;}
  int getValue() const{
      return value;
  }
};
int main()
{
    Test t(30);
    std::cout << t.getValue() << std::endl;
    printf("Hello World");

    return 0;
}
