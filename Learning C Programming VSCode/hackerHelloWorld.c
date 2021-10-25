#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    char arr[]={"Hello, World!"};
    printf("Enter you string:\n");
    //scanf("%s",&s);

    gets(s);


    printf("\n\nYour output is:\n");
    printf("%s\n",arr);
    printf("%s",s);

    /*
    for(int i=0; s[i]!='\0'; i++)
    {
    printf("%c",s[i]);
    }
    */
}