void myFun(int, int, int*, int*, int*);
int main()
{
    int a=34, b=90, sum=0, diff=0, multi=0;
    myFun(a, b, &sum, &diff, &multi);
    printf("sum is %d , diffrance is %d , multiplay is %d\n", sum, diff, multi);
}

void myFun(int a, int b, int *sum, int *diff, int *multi){
    *sum = a+b;
    *diff = a-b;
    *multi = a*b;
}
