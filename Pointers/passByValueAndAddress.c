void value(int, int);
void ref(int *, int *);
int main()
{
    int a=10, b=90;
    printf("pass by value *********** \n");
    printf("Before calling the function a is %d and b is %d\n", a, b);
    value(a, b);
    printf("After calling the function a is %d and b is %d\n", a, b);
    printf("pass by refrence ***********\n");
    printf("Before calling the function a is %d and b is %d\n", a, b);
    ref(&a, &b);
    printf("After calling the function a is %d and b is %d\n", a, b);
}
void ref(int *a, int *b)
{
    (*a)++, (*b)++;
    printf("Inside the function a is %d and b is %d\n", *a, *b);
}
void value(int a, int b)
{
    a++, b++;
    printf("Inside the function a is %d and b is %d\n", a, b);
}
