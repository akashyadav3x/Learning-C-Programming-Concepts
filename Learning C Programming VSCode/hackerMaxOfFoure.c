#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 4 integers:\n");
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            printf("%d is grater",a);
            else
            printf("%d is grater",d);
            
        }
        else
        {
            if(c>d)
            printf("%d is grater",c);
            else
            printf("%d is grater",d);
        }
        
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            printf("%d is grater",b);
            else
            printf("%d is grater",d);
        }
        else
        {
            if(c>d)
            printf("%d is grater",c);
            else
            printf("%d is grater",d);
        }
        
    }
    
}