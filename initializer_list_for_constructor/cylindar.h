#ifndef _CYLINDAR_H_
#define _CYLINDAR_H_

class Cylinder{
    private:
      int base_radius{1};
      int height{1};    
    public:
      Cylinder()=default; // default 
      Cylinder(int r, int h=20);// parameterized constructor
   
      double volume();
};
#endif