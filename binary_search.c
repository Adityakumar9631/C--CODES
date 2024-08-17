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
    printf("\n");
    sorting(arr,n);
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
