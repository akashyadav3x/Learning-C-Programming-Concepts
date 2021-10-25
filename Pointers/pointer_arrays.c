//Arrays
int main()
{
    int i;
    int arr[]={12,23,3,45,5,67,78,89};

    for(i=0; i<sizeof(arr)/sizeof(int); i++)
    {
        printf("Value of arr[%d] is %d\n", i,*(arr+i));
        printf("Addres of arr[%d] is %p\n", i, arr+i);

    }
}
