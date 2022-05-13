
#include <iostream>
#include <cassert>

using namespace std;
class Square{
  private:
  double m_side;
  std::string m_color;
  int m_count;
  
  public:
  Square(double side=0):Square(side,"Red",3)
  {
      assert(side>=0);
      std::cout << "One Parameter constructor called" << std::endl;
  }
  Square(double side, std::string color, int count):m_side(side), m_color(color),m_count(count)
  
  {
     std::cout << "Three Parameter constructor called" << std::endl;
  }
  double findArea(){
      return m_side*m_side;
  }
  
};
int main()
{
    Square sqr(6.0);
    
    Square sqr1 = sqr;
    cout<<"Hello World";

    return 0;
}