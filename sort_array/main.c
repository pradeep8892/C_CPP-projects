/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
     int *a,i,j,tmp;
    int b[10] = {1,30,37,4,100,74,90,45,23,12};
    a=b;
    
for(i=0;i<10;i++)
   {
    for(j=i+1;j<10;j++)
    {
       if( *(a+i) > *(a+j))
       {
          tmp = *(a+i);
         *(a+i) = *(a+j);
         *(a+j) = tmp;
       }
    }
   }
   for (i = 0;i<10;i++)
   {
      printf(" %d ", b[i]);
   }
    return 0;
}
