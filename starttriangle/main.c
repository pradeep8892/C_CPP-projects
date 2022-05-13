/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void printStar(int n){
  int j = 0;
  int k =0;
  for(int i=1;i<=n;++i)
  {
       k = 0;
      for(j=1;j<=(n - i);j++)
      {
        printf(" "); 
      }
    
      while( k !=2*i-1)
     {
        printf("*");
       k++;
     }
     printf("\n");
  }

}
int main()
{
    printStar(6);
    printf("Hello World");

    return 0;
}
