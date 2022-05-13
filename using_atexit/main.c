/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//This C API is used to register functions which can get automatically called when the program finishes its execution.
 // this program describe the uses o atexit funtion, atexit function run after the exection of program.
// Notice that foo and bar functions haven’t been called but are registered to get called when the program exits.
//These should not return anything nor accept any arguments. You can register up to 32 such 
//functions. They’ll get called in the LIFO order.

#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

void foo(void)
{
    printf("Goodbye Foo!\n");
}

void bar(void)
{
    printf("Goodbye Bar!\n");
}

int main(int argc, wchar_t* argv[])
{
    atexit(bar);
    atexit(foo);
    return 0;
}