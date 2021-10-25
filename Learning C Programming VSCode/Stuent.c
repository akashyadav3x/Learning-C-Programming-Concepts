#include<stdio.h>
void main()
{ 
    int arr [3][4];
    int sum,max=0,i,j;
    for ( i = 0; i < 3; i++)
    {
        printf("%d student ka marks:",i+1);
        sum=0;
       for ( j = 0; j < 4; j++)
       {
           printf("\nEnter a marks: ");
           scanf("%d",&arr[i][j]);
           sum=sum + arr[i][j];
        }
        printf("\nSum of %d Student is %d \n",i+1,sum);
        if(sum > max)
           {
               max=sum;
           }
    }
    printf("\nTopper marks sum: %d",max);
    
}