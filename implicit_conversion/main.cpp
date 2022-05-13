// Online C++ compiler to run C++ program online
#include <iostream>
#include <cassert>
class Fraction{
  private:
  int numerator;
  int denominator;
  public:
  Fraction(int numerator=0, int denominator=1): numerator(numerator), denominator(denominator)
  {
    assert(denominator !=0);    
  }
  Fraction(const Fraction& copy):numerator(copy.numerator),denominator(copy.denominator)
  {
   std::cout<<" copy constructor called"<<std::endl;   
  }
  	friend std::ostream& operator<<(std::ostream& out, const Fraction& f1);
	int getNumerator() { return numerator; }
	void setNumerator(int numerator) { numerator = numerator; }
};
void printFraction(const Fraction& f)
{
      std::cout<<f<<std::endl;  
}
std::ostream& operator<<(std::ostream& out, const Fraction& f1)
{
	out << f1.numerator << "/" << f1.denominator;
	return out;
}
int main() {
    printFraction(6);
    // Write C++ code here
    std::cout << "Hello world!";

    return 0;
}