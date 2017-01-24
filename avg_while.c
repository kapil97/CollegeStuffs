#include<stdio.h>
// Program to calculate average of 'n' numbers provided by user
void main()
{
    int a,b=0,c,n;
    float avg;
    printf("\n\nEnter the number of inputs\n");
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&a);
        b=b+a;
        n--;
    }
    avg=(float)b/c; // Calculate floating value of integers 'b' and 'c'
    printf("\n\nAverage of these numbers is : %f",avg);
}
