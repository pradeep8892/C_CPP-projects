
#include <iostream>

using namespace std;
struct Point{
    int x;
    int y;
};
int main()
{
    Point p = {1,2};
    cout<<"Struct P, p.x: "<<p.x<<"  p.y: "<<p.y<<std::endl;
    auto [a,b]=p;
    auto& [a1,b1]=p;
    cout<<"a: "<<a<<"  b: "<<b<<std::endl;
    a = 10; b=11;
    cout<<"Modified a: "<<a<<"  b: "<<b<<std::endl;
    
    int arr[4] = {10,2,12,32};
    auto [w,x,y,z]=arr;
     auto& [w1,x1,y1,z1]=arr;
    cout<<"w: "<<w<<"  x: "<<x<<"  y: "<<y<<"  z: "<<z<<std::endl;
   
    auto func= [a](){
        cout<<"func, a(captured): "<<a<<std::endl;
    } ;  
    func();
    
    auto func1= [=](){
        cout<<"func1, a(captured): "<<a<<std::endl;
        cout<<"func1, b(captured): "<<b<<std::endl;
        cout<<"func1, x(captured): "<<x<<std::endl;
    } ; 
    func1();
    
    auto func2= [=](){
        cout<<"func1, x(captured): "<<x<<std::endl;
        cout<<"func1, y(captured): "<<y<<std::endl;
    } ; 
    func2();
    return 0;
}