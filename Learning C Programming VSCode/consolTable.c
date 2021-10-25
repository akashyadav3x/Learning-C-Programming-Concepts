#include<stdio.h>
void main()
{
    int i,j,a=0,b=1;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            a=i*j;
            printf("%d\t",a+b);
        }
        b++;
    }
}