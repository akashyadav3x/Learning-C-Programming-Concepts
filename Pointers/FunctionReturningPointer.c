//find the given index elemnt
int* myfun(int*, int);
int *half(int*, int);
int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9}, n, *ptr;
    printf("Enter index no ");
    scanf("%d", &n);
    ptr = myfun(arr, n);
    printf("Value of index no %d is = %d",n, *ptr);
    printf("\n***********\n");
    int size=sizeof(arr)/4;
    ptr = half(arr, size);
    printf("Total size of an array is %d\n", size);
    printf("Half array index value is = %d", *ptr);
}
int *half(int *arr, int size)
{
    if(size%2==0){
        size = size/2;
        arr = arr+size;
        return arr;
    }
    else{
        size = (size/2)+1;
        arr = arr+size;
        return arr;
    }
}
int* myfun(int* arr, int n)
{
    //return an address of gievn index
     arr = arr+n;
     return arr;
}
