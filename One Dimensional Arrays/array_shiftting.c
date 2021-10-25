#include<stdio.h>
void main(){
    int arr[]={12,23,34};
    int size = sizeof(arr)/4;
    int i=0, shift;
    shift = arr[0];

    for(i=0; i<3; i++){
        arr[i] = arr[i+1];
    }
    arr[size-1] = shift;

    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
}
