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
    void setName(std::string name){
        this->name = name;
    }
    void setAge(int age){
        *(this->age) = age;
    }
    void setCountry(string country){
        this->country=country;
    }
    void print_info(){
        std::cout <<"dog name: "<<name<<", Age: "<<*age<<", Country: "<<country<< std::endl;
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
    std::cout << "constructor Called at ("<<this<<")" << std::endl;
}
Dog::~Dog(){
    std::cout << name<<": destructor Called at ("<<this<<")" << std::endl;
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
    // AddDog();
    
    Dog dog1(10, "Tommy", "India");
    dog1.print_info();
    dog1.setName("Tom");
    dog1.setCountry("USA");
    dog1.setAge(5);
    dog1.print_info();
    // Dog dog2(5, "Tiger", "USA");
    // Dog dog3(3, "Jill", "Russia");
    // Dog dog4(2, "Jimmy", "Germany");


    return 0;
}

