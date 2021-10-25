#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch;
    char arr[10];
    char brr[100];
    scanf("%c\n",&ch);
    scanf(" %s\n",&arr);
    //printf("%s",arr);
    fflush(stdin);
    gets(brr);
    printf("\n%c\n%s\n%s",ch,arr,brr);
    return 0;
}