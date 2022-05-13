#include <stdio.h>
//using namespace std; 
int main()
{
    for (int i = 0;i<20;i++)
    {
        switch(i){
            case 0 ... 5:
                printf(" case5 %d", i);
                break;
            case 6 ... 10:
                printf(" case10 %d", i);
                break;            
        }
    }

}