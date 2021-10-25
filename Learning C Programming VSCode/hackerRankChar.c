#include<stdio.h>
void main()
{
    int a,b;
    char* akash[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    printf("Enter a tow inputs:\n");
    scanf("%d\n%d",&a,&b);
    for (int i = a; i <= b; i++)
    {
         if(i>9)
        {
            if(b%2==0)
                printf("even");
            else
                printf("odd");
            break;
        }
        printf("%s\n",akash[i]);
    }    
}