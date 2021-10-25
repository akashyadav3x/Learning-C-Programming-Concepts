#include<stdio.h>
int main()
{
    int arr[10], i;
    int sum;
    int largestNumberOfArray, smallestNumber;
    printf("*********aRRYS cODE**********\n");
    printf("Enter the value in arrys\n");
    for(i=0; i<10; i++){
        scanf("%d",&arr[i]);
    }
    largestNumberOfArray = smallestNumber = arr[0];
    printf("\nValues of an arrys is: \n");
    for(i=1; i<10; i++){
        printf("%d ", arr[i]);
        sum += arr[i];
        if (arr[i]>largestNumberOfArray){
            largestNumberOfArray = arr[i];
        }
        if (arr[i]< smallestNumber){
            smallestNumber = arr[i];
        }
    }
    printf("\nSum of an arrys is: %d", sum);
    printf("\nAvrage of an arrys is: %f", sum/10.0);
    printf("\nLargest number in an arry is: %d", largestNumberOfArray);
    printf("\nSmallest number in an arry is: %d", smallestNumber);
return 0;
}
