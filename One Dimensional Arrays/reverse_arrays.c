#include<stdio.h>
int main(){
    int akash[]={10,20,30,40,50,60,70,80,90,100};
    int temp, i, j;

    for(i=0, j=9; i<j; i++, j--){

            temp = akash[i];
            akash[i] = akash[j];
            akash[j] = temp;
    }

    for(i=0; i<10; i++){
        printf("%d ", akash[i]);
    }

return 0;
}
