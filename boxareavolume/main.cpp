
#include <iostream>

using namespace std;

int main()
{
    double width, length,height;
    std::cout << "Welcome to the calculator! Please type in length, width and height informaton" << std::endl;
    std::cout<<"length: ";
    std::cin >> length;
    std::cout<<"width: ";
    std::cin >> width;
    std::cout<<"height: ";
    std::cin >> height;    
    double base_area = width * length;
    double volume = base_area * height;
    std::cout<<"The base area is: "<<base_area<<std::endl;
    std::cout<<"The volume is: "<<volume<<std::endl;

    return 0;
}