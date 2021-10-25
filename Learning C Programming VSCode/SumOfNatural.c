#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
    int n,result;
    printf("Enter a no: ");
    scanf("%d",&n);
    result=sum(n);
    printf("Result is :%d",result);
    getch();
}
int sum(int n)
{
    int sum1;
    if(n<=1)
    {
        return n;
    }
    else
    {
        return sum(n-1)+n;
    }
    
    
}