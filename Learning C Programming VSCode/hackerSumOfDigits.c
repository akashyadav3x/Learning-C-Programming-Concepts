#include<stdio.h>
int main()
{
    int n,x,sum=0;
    printf("Enter a 5 digits: ");
    scanf("%d",&n);
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d",n);
        x=n%10;
        sum = sum+x;
        n=n/10;
    }
    printf("\n%d",sum);
    return 0;
}