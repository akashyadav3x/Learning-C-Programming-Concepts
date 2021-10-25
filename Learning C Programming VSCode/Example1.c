//RECURSION FUNCTION 

#include<stdio.h>
#include<conio.h>
/*
void main()
{
    int i;
    if(i==10)
    {i=1;
    printf("This Function is a recurssive function");
    i++;
    main();
    }
}
*/
//NON RECURSIVE APPROCH

/*
void main()
{
    int num1,num2;
    char choice;
    do{
        printf("Enter two int:\n");
        scanf("%d %d",&num1,&num2);
        printf("Sum of two int is: %d",num1+num2);
        printf("\nDo  you want to continue (Y/N)\n");
        scanf(" %c",&choice);
    }while(choice=='y');
    printf("You are exit the program......\tHAPPY LEARNING");    
}
*/
/*
void main()
{
    int num1,num2;
    char choice;
        printf("Enter two int:\n");
        scanf("%d %d",&num1,&num2);
        printf("Sum of two int is: %d",num1+num2);
        printf("\nDo  you want to continue (Y/N)\n");
        scanf(" %c",&choice);
        if(choice=='y')
                main();
    printf("You are exit the program......\tHAPPY LEARNING");    
}
*/

/*
void fun1();
void fun2(int);
void main()
{
    int a=10;
    fun1();
    printf("\nValue in main: %d",a);
    return;
}
void fun1()
{
    int a=20;
    fun2(a);
    printf("\nYou are in fun1");
    return;
}
void fun2(int n)
{
    printf("value in fun2 is:%d",n);
    return;
}
*/

//RECURSIVE FUNCTION
void fun(int);
void main()
{
    int x=10;
    fun(x);
    return;
}
void fun(int x)
{
    if(x>0)
    {
        printf("\nValue is: %d",x);
        fun(x-1);
        return;
    }
}