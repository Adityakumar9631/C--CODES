#include<stdio.h>
void printing(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int binary_searching(int arr[],int n)
{
    int k,l=0,h,m;
    h=n-1;
    m=(l+h)/2;
    printf("\n");
    printf("Enter element to search:");
    scanf("%d",&k);
    for(m;l<=h;)
    {
        #include<stdio.h>
void printing(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int binary_searching(int arr[],int n)
{
    int k,l=0,h,m;
    h=n-1;
    m=(l+h)/2;
    printf("\n");
    printf("Enter element to search:");
    scanf("%d",&k);
    while(l<=h)
    {
        m=(l+h)/2;
        if(arr[m]==k)
        {
            return m;
        }
        if(arr[m]< k)
        {
            l=m+1;
        }
        else
        h=m-1;
    }
    return -1;
    
    

}
int main()
{
    int n;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printing(arr,n);
    int result=binary_searching(arr,n);
    if(result!=-1)
    {
        printf("\n Element is present at index:%d",result);
    }
    else
    {
        printf("\n Element is not present");
    }
    return 0;
}
        if(arr[m]==k)
        {
            return m;
        }
        if(arr[m]< k)
        {
            l=m+1;
        }
        else
        h=m-1;
    }
    return -1;
    
    

}
int main()
{
    int n;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printing(arr,n);
    int result=binary_searching(arr,n);
    if(result!=-1)
    {
        printf("\n Element is present at index:%d",result);
    }
    else
    {
        printf("\n Element is not present");
    }
    return 0;
}