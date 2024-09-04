#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *creat(int n)
{
    struct node *head=NULL,*temp=NULL,*new_node=NULL;
    int data;
    
    printf("\nEnter 1 data:");
    scanf("%d",&data);
    head=(struct node*)malloc(sizeof(struct node));
    if(!head)
    {
        printf("\nAllocation of memory failed.");
        exit(1);
    }

    head->data=data;
    head->next=head;
    temp=head;

    for(int i=1;i<n;i++)
    {
        printf("Enter %d data:",i+1);
        scanf("%d",&data);
        new_node=(struct node*)malloc(sizeof(struct node));
        if(!new_node)
        {
            printf("\nAllocation of memory failed.");
            exit(1);  
        }
        new_node->data=data;
        new_node->next=head;
        temp->next=new_node;
        temp=new_node;
    }
    return head;
}

void display(struct node *p)
{
    struct node *head=p;
        
    do
    {
        printf("%d->",p->data);
        p=p->next;
    } while (p!=head);
    printf("back to head");
    
}

void empty(struct node *p) {
    while (p != NULL) {
        struct node *temp = p;
        p = p->next;
        free(temp);
    }
}

int main()
{
    int n;
    printf("Enter no. of nodes:");
    scanf("%d",&n);
    struct node *p=creat(n);
    display(p);
    empty(p);

}