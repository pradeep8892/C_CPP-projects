/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// ,(void*)&asd1
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char charArray[20];
char charArray1[20];

char *intToChar(int v1)
{
    bool isNegative = 0;
    memset(charArray,0,20);
    if(v1<0) { isNegative = 1; v1 = -1*v1;}
     static char arr[11] = "0123456789-";
     int i  = 0,k = 0;
     char temp[20];
     while(v1 != 0)
     {
         int v2 = v1%10;
         v1 = v1/10;
        temp[i] = arr[v2];
         i++;
     }
     temp[i] = '\0';
     printf("temp %s ", temp);
     int neg = 0;
     if(isNegative){
         neg =1;  charArray[0] = arr[10];}//strcat(charArray,"-"); }
     for( k = 0;k<=i;k++)
     {
         charArray[k+neg] = temp[i-k-1];
     }
     charArray[k+neg+1] = '\0';
     return charArray;
}
char *conversion(float val)// 0 float 1 integer 
{
    int int_part = 0;
    int float_part = 0;
    bool type = 0;
    int_part = (int)val;
    float f_part = (val - int_part);
    if(val<0) f_part = f_part*-1;
    if(f_part != 0) type  = 1;
    static char *arr1;// = "";//, dot = "";
    char *retarr;
    if(type )
    {
        float_part = f_part*10000;
       // int fpart
       arr1 = intToChar(float_part);
       printf("arf %f",f_part);
        //dot = ".";
        // arr1[0] = ",";//+arr2;
        // arr1[1] = arr2[0];
        // arr1[2] = arr2[1];
        // arr1[3] = arr2[2];
        strcat(charArray1,arr1);
    }
    else{
     int_part = (int)val;
     float_part = 0;
    }
    retarr = intToChar((int)val);
    strcat(retarr,".");
    if(type)strcat(retarr,charArray1);
    //printf(" reyt %s", retarr);
    return retarr;
}

int main()
{
 float a = -986734.812;//.56;
  char *ret = conversion((float)a);
    printf("output %s",ret);// );
    return 0;
}
