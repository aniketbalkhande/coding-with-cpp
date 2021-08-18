#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int A[], int n)
{
    int i,j,flag=0,temp;
    for(i=0;i<n-1;i++)//number of passes
    {
        flag = 0;
        for(j=0;j<n-i-1;j++)//number of comparisons
        {
            if(A[j]>A[j+1]) // swapping
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}
int main()
{
    int A[] = {11,13,7,12,16,9,24,5,10,3}, n=10,i;
    bubble_sort(A,n);
    for(i=0;i<10;i++)
        printf("%d ", A[i]);
    printf("\n");
    return 0;
}


/* Analyzation :
    No. of Swaps : (n-1)
    No. of Comp: n(n-1)/2
    No. of Swaps: n(n-1)/2

    Time complexity of any sorting algorithm is based on no. of comparisons

    Bubble sort O(n^2)
