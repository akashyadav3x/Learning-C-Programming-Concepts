#include<stdio.h>
#define SIZE 5

int maxValue(int [], int);

int main(){
    int myarr[SIZE];
    int i;
    printf("Enter an array elements: ");
    for(i=0; i<SIZE; i++){
        scanf("%d", &myarr[i]);
    }
    printf("Maximum value in an array is: %d", maxValue(myarr, SIZE));
return 0;
}

int maxValue(int arr[], int size){
    int i, max_e;
    max_e = arr[0];
    for(i=1; i<size; i++){
        if(max_e<arr[i]){
            max_e = arr[i];
        }
    }
    return max_e;
}
