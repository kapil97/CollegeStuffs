#include<stdio.h>
// Take input from user and continue taking it if user enters 'Y' or 'y' as input
void main()
{
    char in;
    do
    {
        printf("\n\nWanna continue ?\n");
        scanf("%c",&in);
    }while(in==Y || in==y)
}
