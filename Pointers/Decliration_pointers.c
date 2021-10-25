int main()
{
    int *ptr;
    int **ptr1;
    ptr1 = &ptr;
    printf("%d\n", &ptr);
    printf("%d\n", ptr1);
    int a=10;
    ptr=&a;
    printf("%d\n", ptr);
    printf("%d\n", &a);
    printf("%d\n", a);

    printf("****************\n");
    a=87;
    float b=4.5;
    int *p1=&a;
    float *p2=&b;
    printf("%d\n",p1);
    printf("%d\n", *p1);
    printf("%d\n", *(&a));
    printf("%d\n", p2);
    printf("%f\n", *p2);
    printf("%d\n", ++(*p1));
    printf("%d\n", ++a);
}
