#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int brr[5]={1,2,3,4,5};
    int sum[5]={0};
    int i, j ;

    for(i=0; i<5; i++){
        sum[i]=arr[i]+brr[i];
    }
    i=0;
    while(i!=5){
        printf("%d ",sum[i]);
        i++;
    }
    printf("\n******************************\n");
    for(i=0; i<5;i++){
        for(j=4; j>=0; j--){
        sum[i]= arr[i]+brr[j];
        }
    }
    i=0;
    while(i!=5){
        printf("%d ",sum[i]);
        i++;
    }
return 0;
}
