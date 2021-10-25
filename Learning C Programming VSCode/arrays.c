#include<stdio.h>
void main()
{
    int arr[10];
    int i,j;
    for ( i = 0; i < 10; i++)
    {
        printf("Enter a values: ");
        scanf("%d",&arr[i]);
    }
    for ( j = 0; j < 10; j++)
    {
        printf("Values are: %d\n",arr[j]);
    }
    
}