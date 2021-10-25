#include<stdio.h>

void main()
{
    /*
    int arr[10];
    arr[0] = 10;
    arr[1] = 20;
    printf("Arry 1 value: %d \n", arr[0]);
    printf("Arry 2 value: %d", arr[1]);
    */
    int arr[5];
    float sal[10];
    int i;

    scanf("%d", &arr[0]);
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d", sal[3]);

    printf("*******************\n");

    arr[4] = 25;
    printf("%d\n", arr[4]);
    arr[4]++;
    arr[4]++;
    arr[4]++;
    arr[4]++;
    printf("%d\n", arr[4]);
    printf("%d", arr[5]);

    printf("\n*********************\n");

    sal[5] = 20;
    printf("%f", sal[5]);
    sal[5] += 200;
    printf("\n%f", sal[5]);
    printf("\n%f", sal[5])

}
