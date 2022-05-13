
#include <iostream>

using namespace std;
class Something
{
private:
    std::string m_value {};

public:
    Something(const std::string& value=""): m_value{ value } {}

    const std::string& getValue() const { 
        std::cout << "const Funct called" << std::endl;
        return m_value; 
        
    } // getValue() for const objects (returns const reference)
    std::string& getValue() {
        std::cout << "Non const func called" << std::endl;
        return m_value; } // getValue() for non-const objects (returns non-const reference)
};
int main()
{
    Something smthing("Shri Ram");
    cout<<"\nNon const object member value: "<<smthing.getValue() ;
    
    const Something smthing1("Shri Krrishna");
    cout<<"\nconst object member value: "<<smthing1.getValue() ;

    return 0;
}