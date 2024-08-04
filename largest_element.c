#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n],i,max=0;
    for(i=0;i<n;i++)
    {
        printf("\n enter %d element of array : ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        
        printf(" %d ",arr[i]);
    }
     for(i=0;i<n;i++)
    {
       if(arr[i]>max)
       {
        max=arr[i];
       } 
    }
    printf("\n Maximum term of array:%d",max);
    

    return 0;
}