#include "constant.h"
#include "cylindar.h"

    //   Cylinder()=default; // default 
           // initializer list for constructor
      Cylinder::Cylinder(int r, int h) : base_radius(r), height(h)
      {
        //   base_radius=r;
        //   height=h;
      }
      double Cylinder::volume(){
          return (PI*base_radius*base_radius*height);
      }
