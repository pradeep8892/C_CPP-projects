/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>


int *arraySort(int *p,int len)
{
    int k = 0;
    for (k = 0;k<len;k++)
    {
        for(int i = 0;i<len;i++)
        {
            if(*(p+i) > *(p+k))
               {
                   int pr = *(p+i);
                   *(p+i) = *(p+k);
                   *(p+k) = pr;
                   
               }
        }
    }
    return p;

}

int main()
{
    //int *p = arr;
    int arr[20] = {10,0,9,8,34,100,200,1000,98,12,45,45,67,89,23,56,89,54,103,304};
//;
    int length = sizeof(arr)/4;
    int *res = arraySort(arr,length);
    for(int j = 0;j<20;j++)
    {
    printf("%i ",res[j]);
    }
}
