#include <iostream>
#include <string>
using namespace std;
class Dog{
    public:
    Dog()=default;
    Dog(int ag, std::string nm, std::string cntry);
    ~Dog();
    
    std::string getDogname() const{ return name;}
    std::string getDogCountry() const{ return country;}
    int* getDogAge() const{ return age;}
    void setName(std::string nm){
        name = nm;
    }
    void setCountry(std::string cntry){
        country = cntry;
    }
    void print_info() const{
        std::cout << "Dog name: " <<name<<", country: "<<country<<", Age: "<<*age<< std::endl;
        
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
void pass_const_func_by_value(Dog dg){ // this will work as copy const object will get created
    dg.setCountry("Russia");
    dg.setName(" Ruso");
    dg.print_info();
    std::cout << "dg (Address) "<<&dg << std::endl;
}
void pass_const_func_by_ref(Dog& dg){ // this will not work as this may modify the const object dog1
    // dg.setCountry("Russia");
    // dg.setName(" Ruso");
    dg.print_info();
    std::cout << "dg (Address) "<<&dg << std::endl;
}

void pass_const_func_by_const_ref(const Dog& dg){ // this will work we can not modify the const object 
    // dg.setCountry("Russia"); // compiler error
    // dg.setName(" Ruso");
    dg.print_info();
    std::cout << "dg get name "<<dg.getDogname() << std::endl;
}

void pass_const_func_by_pointer( Dog* dg){ // compiler error
    // dg.setCountry("Russia"); 
    // dg.setName(" Ruso");
    dg->print_info();
    // std::cout << "dg (Address) "<<&dg << std::endl;
}

void pass_const_func_by_const_pointer(const Dog* dg){ // this will work we can not modify the const object 
    // dg.setCountry("Russia"); // compiler error
    // dg.setName(" Ruso");
    dg->print_info();
    // std::cout << "dg (Address) "<<&dg << std::endl;
}
int main()
{
    // AddDog();
    
    const Dog dog1(10, "Tommy", "India");
    dog1.print_info(); // compiler error
    pass_const_func_by_value(dog1); // this will work
    std::cout << "dog1 (Address) "<<&dog1 << std::endl;
    //  pass_const_func_by_ref(dog1);  // this will not work as pass by refrence may modify the original const object dog1
     
     pass_const_func_by_const_ref(dog1);
     
     //pass_const_func_by_pointer(&dog1); // compiler error: could modiify the object
    pass_const_func_by_const_pointer(&dog1);
     
    // Dog dog2(5, "Tiger", "USA");
    
    // Dog dog3(3, "Jill", "Russia");
    // Dog dog4(2, "Jimmy", "Germany");


    return 0;
}



