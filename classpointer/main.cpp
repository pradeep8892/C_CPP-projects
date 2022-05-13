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
    
    Cylinder cy1(10,4);
    cout<<"volume(cy1): "<<cy1.volume()<<endl;
    
    Cylinder* cy2 = new Cylinder(1,3);
    cout<<"volume(cy2): "<<(*cy2).volume()<<endl;
    cout<<"volume(cy2): "<<cy2->volume()<<endl;
    
    cy2 = &cy1;
    cout<<"volume(cy2): "<<cy2->volume()<<endl;
    delete cy2;
    
    Cylinder *cy3;
    // Cylinder cy1(4,4);
    // cout<<"volume: "<<cy1.volume()<<endl;

    return 0;
}

