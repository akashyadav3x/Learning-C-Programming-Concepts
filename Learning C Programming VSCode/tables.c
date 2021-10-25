#include<stdio.h>
void main()
{
    int i=2,j;
    while (i<21)
    {
        printf("Table of %d is \n",i);
        j=1;
        while (j<11)
        {
            printf("%d\n",(j*i));
            j++;
        }
        i++;
        printf("\n");
    }
    
}