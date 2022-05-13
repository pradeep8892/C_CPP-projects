#include <stdio.h>

int function(int A[])
{
    int sum=0;//, size = sizeof(A)/sizeof(A[0]);
    //printf("size %d \n", sum);
    for (int i = 0;i<7;i++)
    {
        sum +=A[i];
    }
    
    return sum;
}

int main(){
    
    int A[] = {1,34,12,45,67,89,90};
    int total = function(A);
    int total1 = function(&A[0]);
    int total2 = function(&A[3]);
    //int total3 = function(A[0]);
    
    printf("val %d %d %d\n", total, total1, total2);
    // printf("%d \n", &A[0]);
    // printf("%d \n", *A);
    // printf("%d \n", A[0]);
    // printf("%d \n", A[2]);
}