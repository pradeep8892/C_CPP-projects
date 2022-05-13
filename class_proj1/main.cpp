/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
const double PI {3.1415926535897932384626433832795};
class Cylinder{
    public:
      int base_radius{};
      int height{};
      double volume(){
          return (PI*base_radius*base_radius*height);
      }
};

int main()
{
    Cylinder cy;
    cout<<"volume: "<<cy.volume()<<endl;
    cout<<"radius: "<<cy.base_radius<<"  height: "<<cy.height<<endl;
    cy.base_radius=10;
    cy.height = 2;
    cout<<"volume: "<<cy.volume()<<endl;
    cout<<"radius: "<<cy.base_radius<<"  height: "<<cy.height<<endl;
    cy.base_radius=24;
    cy.height = 1;
    cout<<"volume: "<<cy.volume()<<endl;
    cout<<"radius: "<<cy.base_radius<<"  height: "<<cy.height<<endl;
    return 0;
}
