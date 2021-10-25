#include<stdio.h>
void checkEvenOdd(int);

void main(){
    int yadav[5];

    int i=0;
    for(i; i<5; i++){
        printf("Enter the value: ");
        scanf("%d", &yadav[i]);
        checkEvenOdd(yadav[i]);
    }

}

void checkEvenOdd(int val){
    if(val%2==0){
        printf("Even number\n");
    }
    else{
        printf("Odd number\n");
    }
}
