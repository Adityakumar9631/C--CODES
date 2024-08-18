#include<stdio.h>
void printing(int r,int c,int arr[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);

        }
        printf("\n");
    }
}
void input(int r,int c,int arr[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);

        }
    }
}
void multipliaction(int r1, int c1, int r2, int c2, int A[r1][c1], int B[r2][c2]) {
    if (c1 != r2 ) {
        printf("Matrix multiplication is not possible, dimensions do not match.\n");
        return;
    }

    int C[r1][c1];

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for(int k=0;k<c1;k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    printf("Resultant Matrix after multiplication:\n");
    printing(r1, c2, C);
}
int main()
{
    int r1,c1;
    printf("ROW of first matrix:");
    scanf("%d",&r1);
    printf("\n COLUMN of first matrix:");
    scanf("%d",&c1);
    int A[r1][c1];
    input(r1,c1,A);
     int r2,c2;
    printf("ROW of second matrix:");
    scanf("%d",&r2);
    printf("\n COLUMN of second matrix:");
    scanf("%d",&c2);
    int B[r2][c2];
    input(r2,c2,B);
    printf("\n 1st matrice are: \n");
    printing(r1,c1,A);
    printf("\n 2nd matrice are: \n");
    printing(r2,c2,B);
    printf("\n");
    multiplication(r1,c1,r2,c2,A,B);
}