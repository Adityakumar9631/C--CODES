#include<stdio.h>
void printing(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void reversing(int arr[],int n)
{
    printf("\n");
   for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }  
}
int main()
{
    int n;
    printf(" Enter no. of elements: ");
    scanf("%d ",&n);
    int arr[n];
    printf("\n eneter elements of an array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    printing(arr,n);
    reversing(arr,n);
}