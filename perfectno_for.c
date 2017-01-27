#include<stdio.h>
// Program which checks whether a number is perfect or not
void main()
{
    int r,nb,num,sum=0;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&num);
    nb=num;
    for(;num>0;num=num/10)
    {
        r=num%10;
        sum=sum+(r*r*r);
    }
    if(nb==num)
    {
        printf("\n\nGiven number %d is a perfect number",nb);
    }
    else
    {
        printf("\n\nGiven number %d is NOT a perfect number",nb);
    }
}
