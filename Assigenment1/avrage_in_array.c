#include<stdio.h>
#define SIZE 5

int avg(int [], int);

int main(){
    int myarr[SIZE];
    int i;
    printf("Enter an array elements:\n");
    for(i=0; i<SIZE; i++){
        scanf("%d", &myarr[i]);
    }
    printf("Average of an array is: %d", avg(myarr, SIZE));
return 0;
}

int avg(int arr[], int size){
    int i,sum, average;

    for(i=0; i<size; i++){
        sum += arr[i];
    }

    return average=sum/size;
}
