#include<stdio.h>
void main()
{ 
    int i,j,k,b=0,a=32;
    for ( i = 4; i >0; i--)
    {
       for ( j = 1; j < 5; j++)
       {
           if(i==j)
           { 
               b=b+1;
               for ( k= 1; k <= b; k++)
                    printf("%d ",k);
                break;
            }
         printf("%c ",a);
        }
         printf("\n");   
     
    }
    
}