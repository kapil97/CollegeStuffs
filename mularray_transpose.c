#include<stdio.h>
// Program to calculate sum of two matrices, 2x2

void main()
{
    int i,j,t,a[3][3],b[3][3];
    printf("\n\nEnter 9 elements of 1st Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\na%d%d : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            t=a[i][j];
            a[i][j]=a[i+1][j+1];
            a[i+1][j+1]=t;
        }
    }
    printf("\n\nSum of Matrices is...\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
