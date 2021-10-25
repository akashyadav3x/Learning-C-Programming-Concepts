#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int brr[5] = {0};
    int i;
    printf("Arr arrys - ");

    for(i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Brr arrys - ");

    for(i=0; i<5; i++){
        printf("%d ", brr[i]);
    }
    printf("\n");
    for(i=0; i<5; i++){
        brr[i]=arr[i];
    }
    printf("Brr arrys - ");

    for(i=0; i<5; i++){
        printf("%d ", brr[i]);
    }
    return 0;
}
