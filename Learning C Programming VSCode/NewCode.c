#include<stdio.h>

struct Stack
{
    int arr[5];
    int tos;
};

void Push(struct Stack*,int);

int Pop(struct Stack *);

void main()
{
 struct Stack s;
 s.tos=-1;
 int choice,x,ans;
 printf("What do you want to do:\n1. PUSH\n2. POP\n3. Exit\nSelect 1 OR 2 OR 3\n");
 scanf("%d",&choice);
 if(choice==1)
 {
         printf("Enter a Elemant: ");
         scanf("%d",&x);
         Push(&s,x);
         printf("Succsfully Pushed element");
 }
 else if(choice==2)
 {
         printf("You select a pop operation\n");
         ans=Pop(&s);
         printf("You poped %d",ans);
 }
 else if(choice==3)
        printf("Your Select a 3");
 else
        printf("Rong choice try again!\n");

printf("\nThank you!");
}


void Push(struct Stack *p, int x)
{
        if(p->tos==4)
        {
                printf("Stack Overflow");
                return;
        }
        p->tos+=1;
        p->arr[p->tos]=x;

}

int Pop(struct Stack *p)
{
        if(p->tos==-1)
        {
                printf("Stack is Underflow");
                return -1;
        }
        int x;
        x=p->arr[p->tos];
        p->tos-=1;
}
