#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
class myClass{
    public:
        int a,b;
        string name;
    private:
        int e;
};
int main()
{
    printf("Hello World");
    myClass my;
    my.a = 12;
    my.name = "ram";
    printf("\n  %d\n", my.a);
    std::cout << my.name << std::endl;
    return 0;
}
