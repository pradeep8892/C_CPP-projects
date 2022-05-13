/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
const double PI {3.1415926535897932384626433832795};
class Cylinder{
    private:
      int base_radius{1};
      int height{1};    
    public:
      Cylinder()=default; // default 
      Cylinder(int r, int h)// parameterized constructor
      {
          base_radius=r;
          height=h;
      }
      double volume(){
          return (PI*base_radius*base_radius*height);
      }
};

int main()
{
    Cylinder cy;
    cout<<"volume: "<<cy.volume()<<endl;
    // Cylinder cy1(4,4);
    // cout<<"volume: "<<cy1.volume()<<endl;

    return 0;
}

