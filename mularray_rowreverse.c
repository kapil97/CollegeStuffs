#include<stdio.h>
// Program to reverse the rows a given n-order matrix

void main()
{
    int a[50][50],b[50][50],r1,c1,i,j;
    printf("\n\nSpecify the order for Matrix 1\n\n");
    scanf("%d%d",&r1,&c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("\nRowReversing\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            b[i][j]=a[r1-i-1][j];
        }
    }

    printf("\n\nPrinting Reverse Matrix\n\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

}
