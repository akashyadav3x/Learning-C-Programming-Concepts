#include<stdio.h>
void main()
{
    int count=10;
    for (int i = 0; i < count; i++)
    {
        printf("%d\n",i+1);
    }
    printf("Press any key to exit the code:");
    getchar();
}