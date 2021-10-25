#include<stdio.h>
int main(){
    int a,n;
    printf("Enter a digit: ");
    scanf("%d",&n);
    printf("Given input is: %d",n);
    while (1)
    {
        n=n/10;
        if(n<10){
            printf("\nFirst digit of an given int is : %d",n);
            break;
        }
    }
    return 0;
}