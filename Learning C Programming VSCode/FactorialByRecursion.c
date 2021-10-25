#include<stdio.h>
int fact(int);
void main()
{
    int num;
    float result;
    printf("Enter a number:");
    scanf("%d",&num);
    result=fact(num);
    printf("\nFactorial is : %f",result);
}
int fact(int num)
{
    if (num<=1)
    { 
        return 1;
    }
    else
    {
        return fact(num-1)*num;
    }   
}