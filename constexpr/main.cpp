// constexpr function for product of two numbers.
// By specifying constexpr, we suggest compiler to
// to evaluate value at compile time
#include <iostream>
constexpr int product(int x, int y)
{
    return (x * y);
}
    const int a = 10;
   const int b =100;
int main()
{
    constexpr int x = product(10, 20);
    std::cout << x<<std::endl;

    constexpr int y = product(a, b);
    std::cout << y<<std::endl;
    return 0;
}