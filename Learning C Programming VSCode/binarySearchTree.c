#include<stdio.h>
#include<stdlib.h>
struct bst
{
    struct bst *left;
    int data;
    struct bst *right;
};
void append(struct bst**, int);
int search(struct bst*,int);
int main()
{
    int a,result,i;
    int arr[5];
    struct bst *root=NULL;
    for(i=0;i<5;i++)
    {
        printf("Enter the %d elemant in the bst:",i+1);
        scanf("%d",&arr[i]);
        append(&root,arr[i]);
    }
    
    //append(&root, 10);
    //append(&root, 20);
    //append(&root, 30);
    //append(&root, 40);
    //append(&root, 50);
    printf("You are about to displaying the element:\n");
    printf("Do you want search the elemant in bst:\n");
    printf("Enter the element for searching:");
    scanf(" %d",&a);
    result=search(root,a);
    if(result==1)
    {
        printf("Searched elemant %d is in bst");
    }
    else
    {
        printf("Your selected elemanr %d is not in bst");
    }
    
    return 0;
}
void append(struct bst**pr, int x)
{
    struct bst*p,*temp,*prev;
    p=(struct bst*)malloc(sizeof(struct bst));
    p->data=x;
    p->left=p->right=NULL;
    if (*pr==NULL)
    {
        *pr=p;
        return;
    }
    temp=*pr;
    while (temp!=NULL)
    {
        prev=temp;
        if (temp->data>x)
            temp=temp->left;
        else
            temp=temp->right;
    }
    if (prev->data>x)
        prev->left=p;
    else
        prev->right=p;

}

//SEARCH FUNCTION FOR SEARCHINF THE ONE ELEMANT
int search(struct bst *p,int x)
{
    struct bst *temp;
    if (p==NULL )
    {
        printf("Tree is empty:");
        return 0;
    }
    temp=p;
    while (temp!=NULL)
    {
        if (temp->data==x)
        {
            printf("Congrulations:");
            return 1;
        }
        
        if (x<temp->data)
        {
            temp=temp->left;
        }
        else
        {
            temp=temp->right;
        }
    }
    return -1;
}
