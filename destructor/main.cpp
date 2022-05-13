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
    
    Dog *dg1 = new Dog(3,"Tom"," England");
    std::cout << "dg1 object Dog Name: " <<(*dg1).getDogname()<<"\ncountry: "<<(*dg1).getDogCountry()<< std::endl;
    delete dg1; // this will cause Dog d1 destructor to be called
    Dog dg(10, "Tommy", "India");
    std::cout << "dg object Dog Name: " <<dg.getDogname()<<"\ncountry: "<<dg.getDogCountry()<< std::endl;
    cout<<"Exiting Main\n";
    // before exiting the main Dog dg destructor will be called and dg object will get deleted
    

    return 0;
}

