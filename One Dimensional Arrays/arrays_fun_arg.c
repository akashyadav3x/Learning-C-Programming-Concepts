#include<stdio.h>
void square_arrays(int[], int);

void main(){
    int akash[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(akash)/4, i;
    square_arrays(akash, size);
    printf("My array is: - ");
    for(i=0; i<size; i++){
        printf("%d ", akash[i]);
    }
}

void square_arrays(int arr[], int size_arr){
    int sum=0, i;

    for(i=0; i<size_arr; i++){
        arr[i] = arr[i]*arr[i];
        sum += arr[i];
    }
    printf("Sum of square is: %d\n", sum);
}
