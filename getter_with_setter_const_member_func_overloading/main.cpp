
#include <iostream>

using namespace std;
class Person{
    private:
    std::string name;
    std::string address;
    int age;
    std::string gender;
    float height_feet=0;
    
    public:
    Person()=default;
    Person(const std::string& name, const int& age, const std::string& address,const std::string& gender, const float& height_feet);

    std::string& get_name(){
        return name;
    }
    const std::string& get_name() const{
        return name;
    }
    std::string& get_address(){
        return address;
    }
    const std::string& get_address() const{
        return address;
    }
    std::string& get_gender(){
        return gender;
    }
    const std::string& get_gender() const{
        return gender;
    }
    int& get_age(){
        return age;
    }
    const int& get_age() const{
        return age;
    }
    float& get_height(){
        return height_feet;
    }
    const float& get_height() const{
        return height_feet;
    }
    void print_info() const{
        std::cout << "Person name: " <<name<<", Age: "<<age<<", address:"<<address<<", gender: "<<gender<<", Height: "<<height_feet<< std::endl;
    }
};
Person::Person(const std::string& name, const int& age, const std::string& address,const std::string& gender, const float& height_feet)
{
        
  this->name=name;
  this->age=age;
  this->address=address;
  this->gender=gender;
  this->height_feet=height_feet;
}
int main()
{
    Person p1("Ram", 20, "New Delhi", "Male",7.2);
    p1.print_info();
    p1.get_name()="Krrishna";
    p1.get_height()=6.4;
    p1.get_gender()="Male";
    p1.get_age()=25;
    p1.get_address()="Mathura";
    p1.print_info();
    
    const Person p2("PrithviRaj", 20, "Ajmer", "Male",6.3);
    p2.print_info();
    cout<<"\n"<<p2.get_name()<<endl;
    p2.get_height();
    p2.get_gender();
    p2.get_age();
    p2.get_address();
    p2.print_info();
    
    // cout<<"Hello World";

    return 0;
}