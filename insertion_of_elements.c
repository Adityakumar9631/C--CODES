#include<stdio.h>

    int main()
    {
        int arr[1000],i,n,k,l;
        printf("Enter number of elements : ");
        scanf("%d",&n);
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
    printf("\nEnter position of element: ");
    scanf("%d",&k);
    printf("\n Enter the element : ");
    scanf("%d",&l);
    for(i=n;i > k;i--)
    {
        arr[i]=arr[i-1];
        arr[k]=l;
        n++;
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    
    }
