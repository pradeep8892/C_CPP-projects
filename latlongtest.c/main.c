/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

float sinV(float a)
{
    return (float)(sin(a));
}

float taylarSin(float x)
{
    
        int i, n = 30;
    float sum, t;
    x=x;//*3.14159/180;
    t=x;
    sum=x;
     
    /* Loop to calculate the value of Sine */
    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }
    printf(" \n taylar sin %f", sum);
}

int main()
{
    
        float degree = 0.01746; //
        float Dlatlong[2] = {28.53091524130302,77.19421184221271};
        float Hlatlong[2] = { 28.53000817519886, 77.19431173056364};
        float Dltt = (Dlatlong[0] - Hlatlong[0]) * (degree / 2.0f);
        float Dlgg = (Dlatlong[1] - Hlatlong[1]) * (degree / 2.0f);
        float Dst = sinV(Dltt) * sinV(Dltt)
                + sinV(1.571428 - (Dlatlong[0] * degree)) * sinV(1.571428 - (Hlatlong[0] * degree)) * sinV(Dlgg)
                        * sinV(Dlgg);
    //    printf("\n DST %f %f %f", Dst*10000, 10000*atan(sqrt(Dst)/sqrt(1 - Dst)), 10000*acos(sqrt(1 - Dst)));
taylarSin(0.5);
printf("\nsin value %f %f  " ,10000*atan(sqrt(Dst)/sqrt(1 - Dst)), 100000*acos(sqrt((1-Dst)/(2*Dst-1))));
    return 0;
}
