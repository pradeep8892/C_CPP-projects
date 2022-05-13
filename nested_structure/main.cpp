#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

struct Address{
    int house_no;
    string street_name;
};
struct student{
    int rollno;
    char sex;
    Address addr;
};
struct student1{
    int rollno;
    int sex;
    Address addr;
};

int main()
{
    printf(" size of %d \n", sizeof(student));
    printf(" size of %d \n", sizeof(Address));
    printf(" size of %d \n", sizeof(string));
    printf(" size of %d \n", sizeof(student1));
    student Ram;
    Ram.rollno = 123;
    Ram.sex = 'm';
    Ram.addr.house_no = 43;
    Ram.addr.street_name = "new street";
    std::cout << "street_name "<<Ram.addr.street_name << std::endl; 
    
    student *Shyam;
    Shyam = &Ram;
    Shyam->rollno = 123;
    Shyam->sex = 'm';
    Shyam->addr.house_no = 43;
    Shyam->addr.street_name = "shyam street";
    printf(" roll %d", Shyam->rollno);
    std::cout << " \nstreet_name "<<Shyam->addr.street_name << std::endl;
    return 0;
}
