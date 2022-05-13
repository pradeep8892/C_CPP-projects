

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    std::string country;
    std::cout<<std::endl;
    std::cout<<std::setw(10)<<"country"<<std::setw(10)<<"Person"<<std::setw(10)<<std::endl;
    std::cout<<"India"<<std::setw(10)<<"Ram"<<std::setw(10)<<std::endl;
    std::cout<<"USA"<<std::setw(10)<<"Lincon"<<std::setw(10)<<std::endl;
    std::cout<<"China"<<std::setw(10)<<"Jinping"<<std::setw(10)<<std::endl;
    std::cout<<"France"<<std::setw(10)<<"Emanual"<<std::setw(10)<<std::endl;
    std::cout<<"Russia"<<std::setw(10)<<"Putin"<<std::setw(10)<<std::endl;
    std::cout<<std::setfill('-');
    std::cout<<std::left;
    std::cout<<"Russia"<<std::setw(10)<<"Putin"<<std::setw(10)<<std::endl;
        std::cout<<std::right;
    std::cout<<"Russia"<<std::setw(10)<<"Putin"<<std::setw(10)<<std::endl;
        std::cout<<std::internal;
    std::cout<<"Russia"<<std::setw(10)<<"Putin"<<std::setw(10)<<std::endl;
    // std::cin>>country;
    // std::cout<<"I've heard great things about "<<country<<". I'd like to go sometime."<<std::endl;

    return 0;
}
