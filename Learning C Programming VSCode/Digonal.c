#include<stdio.h>
void main()
{
    int arr [4][4];
    int i,j,sum=0,avg,max=0,sneha;
for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("Enter a no:");
            scanf("%d",&arr[i][j]);
            if(i==j)
            {
                sum=sum + arr[i][j];
                avg=sum/16.0;
            }
            if(max < arr[i][j])
            {
                max=arr[i][j];
            }
        }
      
    }
      printf("Sum of digonal : %d",sum);
      printf("\nAverage is : %d",avg);
      printf("\nGratest no is in the arrays: %d",max);
}
    