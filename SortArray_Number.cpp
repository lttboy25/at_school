#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

void Swap(int *c,int *d)
{
    int tam = *c;
    *c = *d;
    *d = tam;
}
void SortArray(int *A, int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] > A[j]) {
                Swap(&A[i],& A[j]);
            }
        }
    }
    for (int k = 0; k<n; k++)
    {
        if (A[k] == A[k+1])
        {
             for (int m = k; m<n; m++)
            {
                   A[m] = A[m+1];
            }n--;
        }
       
    }
       
    for (int i = 0; i<n; i++)
    {
        printf("%d ",*(A+i));
    }
    
    
}
int main()
{
int A[MAX] = {1,4,2,5,6,3,3,45,7,8,9,1};
int n = 12;
SortArray(A,n);
}
