#include<stdio.h>
double power(int,int);
void main()
{
    int x,y;
    double result;
    printf("Enter number and power:\n");
    scanf("%d %d",&x,&y);
    result=power(x,y);
    printf("Power of %d is %lf",x,result);
}
double power(int x,int y)
{
    if(y==0){
        return 1;
    }
    else if(y==1){
        return 1;
    }
    else
    {
        return power(x,y-1)*x;
    }
    
}