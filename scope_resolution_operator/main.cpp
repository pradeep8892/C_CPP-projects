#include <iostream>
#include <stdio.h>
using namespace std;
class myClass{
    static int x;
    public:
        static int y;
        void func();
        
        void func1(int x=15, int y=123){
            std::cout << "\n global static x "<<myClass::x << std::endl;
            std::cout << "\n local static x "<<x << std::endl;
            std::cout << "\n global static y "<<myClass::y << std::endl;
            std::cout << "\n local static y "<<y << std::endl;
        }
        class inside{
          public:
            int x = 10;
            static int y;
            int insideFunc();
        };
};
int myClass::inside::y = 145;
int myClass::inside::insideFunc(){
    cout<<"\n inside function"<<endl;
    return 1;
}
void myClass::func(){// :: used to define a function out side a class
    cout<<"\nHello func()"<<endl;
}
int myClass::x = 12;
int myClass::y = 34;// :: scope resolution operator to access the static variable of a class
//int myClass::x = 35;
int x1 = 20;
int main()
{
    myClass myobj;
    myobj.func();
    myobj.func1();
    myClass::y = 90;
    
    int x1 = 10;
    for (int i = 0;i<4;i++){
        cout<<" g\t"<<::x1+i; // :: scope resolution operator to access the global variable value having same name local variable
        cout<<" l\t"<<x1+i;
    }
    myClass::inside inobj;  // :: operator Refer to a class inside another class:
    inobj.insideFunc();
    
    printf("Hello World %d", myClass::inside::y);

    return 0;
}
