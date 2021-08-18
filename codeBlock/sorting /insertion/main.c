#include <stdio.h>
#include <stdlib.h>
void insertion_sort(int A[], int size)
{
    int LHS,RHS, element;
    for(RHS=1;RHS<size;RHS++)
    {
        LHS=RHS-1;
        element=A[RHS];
        while(LHS>-1 && A[LHS]>element)
        {
            A[LHS+1] = A[LHS];
            LHS--;
        }
        A[LHS+1]=element;
    }
}

int main()
{
    int A[] = {11,13,7,12,16,9,24,5,10,3}, n=10,i;
    insertion_sort(A,n);
    for(i=0;i<10;i++)
        printf("%d ", A[i]);
    printf("\n");
    return 0;
}
