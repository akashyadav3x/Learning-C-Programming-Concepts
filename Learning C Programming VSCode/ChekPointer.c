#include<stdio.h>
void func(int,int,int *,int*, int *);
void main(){
    //RETURNING MORE THEN ONE VALUES FROM A FUNCTION
    int a,b,add,sub,multi;
    printf("enter a no: ");
    scanf("%d",&a);
    printf("enter a no: ");
    fflush(stdin);
    scanf("%d",&b);
    func(a,b,&add,&sub,&multi);
    printf("Adddition is: %d\n",add);
    printf("sub is: %d\n",sub);
    printf("Multi is: %d\n",multi);

}
void func(int a, int b, int*p, int *q, int*r){
    if(a>b)
        *q=a-b;
    else
        *q=b-a;    
    *p=a+b;
    *r=a*b;
}