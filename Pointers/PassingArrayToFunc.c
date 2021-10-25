void myfunc(int arr[], int*, int);
int main()
{
    int arr[]={1,2,3,4,5,6}, i;
    printf("size of int is %d\n", sizeof(int));
    printf("Size of an arry in main %d\n", sizeof(arr));
    int size = sizeof(arr)/4;
    myfunc(arr, arr, size);
    printf("Inside main(): \n");
    for(i=0; i<size; i++){
        printf("%d  ", arr[i]);
    }
}
void myfunc(int arr[], int *brr, int size)
{
    printf("Size of an arry in func %d\n", sizeof(arr));
    int i=0;
    for(i=0; i<size; i++)
    {
        arr[i] += 2;
    }
}
