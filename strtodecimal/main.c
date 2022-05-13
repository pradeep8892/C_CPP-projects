/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>

uint8_t AsciiToHex(const char* src, uint8_t* dst)
{
  uint8_t i=0,j=0,k=0;
  uint8_t tempdst[50]= {0};
  while((src[i] != '\0'))
  {
    if((src[i] >= '0') && (src[i] <= '9'))  tempdst[j++] = src[i++]-'0';
    else if((src[i] >= 'A')&&(src[i] <= 'F')) tempdst[j++] = src[i++]-'7';
    else if((src[i] >= 'a')&&(src[i] <= 'f')) tempdst[j++] = src[i++]-'W';
    
  }
  for(i=0,k=0;i<j;i=i+2,k++)
  {
    dst[k] = (tempdst[i]<<4)| tempdst[i+1]; 
    printf("%d ", dst[k]);
  }
  
  return k;
}

int main()
{
    printf("Hello World");
    uint8_t strTohex[20];
    const char data[20] = "ABCDEFGHIJKLMNOPQR";
    AsciiToHex(data,strTohex);


    return 0;
}
