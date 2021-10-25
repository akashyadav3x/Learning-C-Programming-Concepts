#include<stdio.h>
int all();
void main(){
    int arr1[5],arr2[5],*p,*q;p=arr1;q=arr2;for(int i=0;i<5;i++){printf("enter a no in arr1: ");scanf("%d ",&arr1[i]);printf("enter no in arr2: ");scanf("%d ",&arr2[i]);}
    all(p,q);printf("Thank you");
}
int all(int *p,int *q){
    for(int i=0;i<5;i++){
        printf("Arr1 is %d \n",*(p+i));
        printf("arr2 is %d \n",*(q+i));
    }
    return 0;
}