#include <stdio.h>
void pointerArray_1d(int *a) //or a[]
{
    while(*a != '\0')
    {
        printf("\n %d", *a);
        a++;
    }
}
void pointerArray_2d(int (*a)[2]) // or a[][2]
{
    
}void pointerArray_3d(int (*a)[2][2])// or a[][2][2]
{
    
}
int main()
{ 
   // printf("Hello World");
   int A1[2] = {90,89};
   //int A2[2][2] = {123,124};
    int A[3][2][2] = {{{2,14}, {4, 5}},
                      {{6,7}, {8, 9}},
                      {{10, 11},{12,13}}
                     
                     };
    printf("\n %d %d %d %d %d %d", A, *A, A[0], A[0][0], &A[0][0], &A[0][0][0]);
    printf("\n %d %d %d %d %d %d", *(A[0][0]+1), ***(A), *(**A+1), (A[0][0][0]+1), &A[0][0], &A[0][0][0]);
    pointerArray_1d(A1);

    return 0;
}
