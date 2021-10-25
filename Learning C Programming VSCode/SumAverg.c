#include<stdio.h>
void main()
{ 
    int arr[5],sum=0,i,j;
   
    for ( i = 0; i <5; i++)
    {
        printf("Enter the number:");
        scanf("%d",&arr[i]);
    }
    for ( j = 0; j < 5; j++)
    {
        printf("%d \n",arr[j]);
        sum=sum+arr[j];
    }
    
    printf("Sum is %d",sum);
}