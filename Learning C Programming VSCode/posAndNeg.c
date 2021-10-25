#include<stdio.h>
void main()
{
    int number;
    printf("Enter the number:\n");
    scanf("%d",&number);
    printf("Your number is:%d",number);
    if(number>0)
    {
        printf("\nYou have entered postitive \n%d",number);
    }
    else if(number<0)
    {
        printf("\nYou hav'entered negative\n%d",number);
    }
    else
    {
        printf("\nYou have entered\n 0");
    }
}