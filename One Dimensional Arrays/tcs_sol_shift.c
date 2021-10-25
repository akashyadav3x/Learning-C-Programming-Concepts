#include<stdio.h>
void main(){
    printf("Enter an array: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    int i=0;

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++){
        if(arr[i] == 0){
            i++;
        }
    }

    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

}
