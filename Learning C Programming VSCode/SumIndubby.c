#include<stdio.h>
void main()
{
    int arr[4][4];
    int i,j,k=0;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("Enter a no:");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("Sum no are:\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if(arr[i][j] % 2 == 0)
            {
                printf("%d\n",arr[i][j]);
            }
        }
    }
}