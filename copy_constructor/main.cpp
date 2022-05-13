// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
    std::string name;
    int roll_no;
    std::string Class;
    std::string address;
    public:
    Student(std::string name, int roll_no,std::string Class,std::string address );
    Student (const Student& std1);
    Student* getStudentDetail();
    void print_student_detail(){
        std::cout<<"Student Name: "<<name<<", Roll no: "<<roll_no<<", Class: "<<Class<<", Address: "<<address<<std::endl;
    }
    void setStudentName(std::string nm){ name=nm;}
    void setStudentRollno(int r_n){ roll_no=r_n;}
    void setStudentClass(std::string cls){ Class=cls;}
    void setStudentAddress(std::string adr){ address=adr;}
};
Student::Student(std::string name, int roll_no,std::string Class,std::string address):name(name), roll_no(roll_no),Class(Class),address(address)
{
    std::cout<<" constructor called"<<endl;
}
Student::Student (const Student& std1): name(std1.name),roll_no(std1.roll_no),Class(std1.Class),address(std1.address)
{
    std::cout<<"Copy constructor called"<<endl;
}
int main() {
    // Write C++ code here
    Student student("Ram",123,"X", "New Delhi");
    student.print_student_detail();
    Student student1 = student;
    student1.print_student_detail();
    
    Student student2("Krrishna",130,"XII", "Prayagjar");
    student2.print_student_detail();
    Student student3(student2);
    student3.print_student_detail();
    // std::cout << "Hello world!";

    return 0;
}