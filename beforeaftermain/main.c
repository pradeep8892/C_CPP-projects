/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h> 

/* Apply the constructor attribute to myStartupFun() so that it 
	is executed before main() */
void myStartupFun (void) __attribute__ ((constructor)); 


/* Apply the destructor attribute to myCleanupFun() so that it 
is executed after main() */
void myCleanupFun (void) __attribute__ ((destructor)); 


/* implementation of myStartupFun */
void myStartupFun (void) 
{ 
	printf ("startup code before main()\n"); 
} 

/* implementation of myCleanupFun */
void myCleanupFun (void) 
{ 
	printf ("cleanup code after main()\n"); 
} 

int main (void) 
{ 
	printf ("hello\n"); 
	return 0; 
} 
