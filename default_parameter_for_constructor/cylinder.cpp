#include "constant.h"
#include "cylindar.h"

    //   Cylinder()=default; // default 
      Cylinder::Cylinder(int r, int h)// parameterized constructor
      {
          base_radius=r;
          height=h;
      }
      double Cylinder::volume(){
          return (PI*base_radius*base_radius*height);
      }
