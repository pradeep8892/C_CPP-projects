#include <iostream>
#include <string>
using namespace std;
class Dog{
    public:
    Dog()=default;
    Dog(int ag, std::string nm, std::string cntry);
    ~Dog();
    
    std::string getDogname(){ return name;}
    std::string getDogCountry(){ return country;}
    int* getDogAge(){ return age;}
    void setName(std::string nm){
        name = nm;
    }
    void setCountry(std::string cntry){
        country = cntry;
    }
    private:
    int *age{nullptr};
    std::string name;
    std::string country;
};
Dog::Dog(int ag, std::string nm, std::string cntry){
    age=new int;
    *age=ag;
    name=nm;
    country=cntry;
    std::cout << "constructor Called" << std::endl;
}
Dog::~Dog(){
    std::cout << name<<": destructor Called" << std::endl;
    delete age;
    
    
}

int AddDog(){
    Dog dog(5, "Tiger", "USA");
    std::cout << "Dog object Dog Name: " <<dog.getDogname()<<"\ncountry: "<<dog.getDogCountry()<< std::endl;
    std::cout << "Exiting AddDog Function" << std::endl;
    // before exiting the AddDog function Dog dog destructor will be called and dog object will get deleted
    return 0;
}
int main()
{
    AddDog();
    
    const Dog dog1(10, "Tommy", "India");
    Dog dog2(5, "Tiger", "USA");
    
    dog1.setName("julie"); // compiler error : violates const
    dog1.getDogCountry();// compiler error
    // Dog dog3(3, "Jill", "Russia");
    // Dog dog4(2, "Jimmy", "Germany");


    return 0;
}


