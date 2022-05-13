
#include <iostream>
#include <cstring>
using namespace std;
class String{
    private:
        char *s;
        int size;
    public:
        String(const char* str=NULL);
        ~String(){ delete[] s;}
        String(const String& st);
        void print(){
            std::cout << s << std::endl;
        }
        void change(const char *str);
};
String::String(const char* str){
    size=strlen(str);
    s = new char[size+1];
    strcpy(s,str);
}
String::String(const String& st){
    size = st.size;
    
    s  = new char[size+1];
    strcpy(s,st.s);
}
void String::change(const char *str){
    size = strlen(str);
    delete [] s;
    s  = new char[size+1];
    strcpy(s,str);   
}

int main()
{
    String str1("I am Shyam");
    str1.print();
    str1.change("I am Krrishna");
    str1.print();
    
    String str=str1;
    str.change("I am Ram");
    str.print();
    str1.print();
    
    cout<<"Hello World";

    return 0;
}
