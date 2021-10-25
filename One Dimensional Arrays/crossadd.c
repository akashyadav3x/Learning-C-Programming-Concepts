#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int brr[]={1,2,3,4,5};
    int sum[5]={0};
    int i, j ;

    for(i=0; i<5; i++){
        for(j=4; j>=0; j--){
            sum[i] = arr[i]+brr[j];
        }
    }

    for(i=0; i<5; i++){
        printf("%d ",sum[i]);
    }
    return 0;
}
