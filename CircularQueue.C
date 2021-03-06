#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX_QUEUE 4
#define NIL -1
typedef struct CircularQueuetype
{
int a[MAX_QUEUE];
int front;
int rear;
}queue;
void main()
{
void insertioninCqueue(queue *,int);
int deletioninCqueue(queue *);
int isfull(queue *);
int isempty(queue *);
int choice,item,x;
queue Q1,Q2;
Q1.front=NIL;
Q1.rear=NIL;
clrscr();
while(1)
{
clrscr();
printf("\n Enter your choice \n 1:INSERTION IN CIRCULAR QUEUE \n 2:DELETION IN CIRCULAR QUEUE \n 3:EXIT \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
x=isfull(&Q1);
if(x==1)
{
printf("QUEUE IS FULL");
break;
}
else
{
printf("Enter the item to be inserted");
scanf("%d",&item);
insertioninCqueue(&Q1,item);
}
break;

case 2:
x=isempty(&Q1);
if(x==1)
{
printf("QUEUE IS EMPTY");
break;
}
else
{
item=deletioninCqueue(&Q1);
printf("Deleted item = %d",item);
}
break;

case 3:
exit(1);
break;

default:
printf("Wrong choice");
exit(1);
}
getch();
}
}
void insertioninCqueue(queue *Q,int item)
{
int i;
 if(Q->front==-1 && Q->rear==-1)
  {
   Q->front=Q->front+1;
   Q->rear=Q->rear+1;
  }
 else if(Q->rear==MAX_QUEUE-1)
  {
   Q->rear=0;
  }
 else
  {
  Q->rear=Q->rear+1;
  }
 Q->a[Q->rear]=item;
 printf("Operation successful");
}
int deletioninCqueue(queue *Q)
{
 int item;
 item=Q->a[Q->front];
 if(Q->front==Q->rear) //when single element
 {
  Q->front=Q->rear=-1;
 }
 else if(Q->front==MAX_QUEUE-1)
 {
 Q->front=0;
 }
 else
 {
  Q->front=Q->front+1;
 }
 return item;
}
int isfull(queue *Q)
{
if((Q->front==0 && Q->rear==MAX_QUEUE-1)||(Q->front-Q->rear==1))
return 1;
else
return 0;
}
int isempty(queue *Q)
{
if(Q->front==NIL && Q->rear==NIL)
return 1;
else
return 0;
}
