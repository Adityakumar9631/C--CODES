#include<stdio.h>
void printing(int arr[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void sorting(int arr[],int n)
{
    
    int t=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
            }
            
        }
    }
    
}
void merging(int A[], int B[], int C[], int n, int m) {
    int i = 0, j = 0, k = 0;
    while(i < n && j < m) {
        if(A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }
    while(i < n) {
        C[k++] = A[i++];
    }
    while(j < m) {
        C[k++] = B[j++];
    }
}


int main()
{
    int n,m;
    printf("Enter no. of elements in 1st array:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("\n Enter no. of elements in 2nd array:");
    scanf("%d",&m);
    int B[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&B[i]);
    }
    int C[m+n];
    printf("\n 1st array are:");
    printing(A,n);
    printf("\n 2nd array are:");
    printing(B,m);
    printf("\n 1st sorted array are:");
    sorting(A,n);
    printing(A,n);
    printf("\n 2nd sorted array are:");
    sorting(B,m);
    printing(B,m);
    merging(A,B,C,n,m);
    printf("\n Merged array are:");
    printing(C,n+m);
    
    return 0;
}