#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "Hi iamnRam, and Shyam is my friend. Shyam is Shyam Ram is Ram. Shyam Ram";
    string str1 = "Ram";
    string str2 = "Shyam";
    cout<<" Find first occurence of Ram: "<<str.find(str1)<<endl;
    cout<<" Find first occurence of Shyam: "<<str.find(str2)<<endl;
    cout<<" Find first occurence of Ram: "<<str.find_first_of(str1)<<endl;
    cout<<" Find first occurence of Shyam: "<<str.find_first_of(str2)<<endl;
    cout<<" Find last occurence of Ram: "<<str.find_last_of(str1)<<endl;
    cout<<" Find last occurence of Shyam: "<<str.find_last_of(str2)<<endl;
    cout<<" Find last occurence of Ram: "<<str.rfind(str1)<<endl;
    cout<<" Find last occurence of Shyam: "<<str.rfind(str2)<<endl;
    cout<<str.compare(str1)<<endl;
	// Comparing strings using compare()
	if ( str.compare(str1) == 0 )
		cout << "Strings are equal";
	else
		cout << "Strings are unequal";
	return 0;
}
