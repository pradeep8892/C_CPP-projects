/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "constant.h"
#include "cylindar.h"

using namespace std;

int main()
{
    Cylinder cy;
    cout<<"volume: "<<cy.volume()<<endl;
    Cylinder cy1(4,4);
    cout<<"volume: "<<cy1.volume()<<endl;

    return 0;
}

