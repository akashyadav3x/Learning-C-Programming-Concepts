#include<stdio.h>
void main()
{
    /*
    char str [10];
    int arr [10];
    printf("%d\n",str);
    printf("%u\n",str);
    printf("%i\n",str);
    printf("\n\n");
    printf("%d\n",arr);
    printf("%u\n",arr);
    */
   char str [20];
   printf("Enter a string:\n");
   scanf("%s",str);
   for (int i = 0; i < 20; i++)
   {
       printf("%c\n",str[i]);
   }
   printf("Your code is finished....");
}