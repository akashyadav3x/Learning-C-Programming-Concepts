#include <stdio.h>
#include <stdlib.h>

struct Queue
{
	int arr[5];
	int front;
	int rear;	
};


void enqueue(struct Queue *, int);
int dequeue(struct Queue *);

void main(){
	struct Queue Q;
	int x, data,y;
	Q.front = 0;
	Q.rear = -1;
	for(int i=0; i<5; i++){
		printf("enter the element: ");
		scanf("%d",&data);
		enqueue(&Q,data);
	}
	printf("\n\n");

	for(int i=0; i<5; i++){
		x = dequeue(&Q);
		if(x != -1)
		    printf("Deleted elemrnt is: %d\n", x);
	}
}

void enqueue(struct Queue *p, int data){
	if(p->rear == 4){
		printf("Queue is a state of Ovrflow\n");
		return;
	}
	p->rear += 1;
	p->arr[p->rear] = data;
}

int dequeue(struct Queue *p){
    int x;
	if(p->front > p->rear){
		printf("Queue is in state of Underflow\n");
		return -1;
	}
	x = p->arr[p->front];
	p->front += 1;
	return x;
}