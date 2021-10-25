#include<stdio.h>
#define SIZE 5

int sum(int [], int);

int main(){
    int myarr[SIZE];
    int i;
    printf("Enter an array elements:\n");
    for(i=0; i<SIZE; i++){
        scanf("%d", &myarr[i]);
    }
    printf("Average of an array is: %d", sum(myarr, SIZE));
return 0;
}

int sum(int arr[], int size){
    int i,total;

    for(i=0; i<size; i++){
        total += arr[i];
    }

    return total;
}
