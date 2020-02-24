#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX_STACK 10
#define NIL -1
typedef struct Stacktype
{
int S[MAX_STACK];
int top1;
int top2;
}stack;
void main()
{
void Push(stack *,int,int);
int Pop1(stack *,int);
int isoverflow(stack *);
int isunderflow(stack *);
int peep(stack *);
int choice,item,x,type;
stack S1,S2;
S1.top1=NIL;
S1.top2=MAX_STACK;
clrscr();
while(1)
{
//clrscr();
printf("\n Enter your choice \n 1:Push in stack1 \n 2:Push in stack2 \n 3:Pop in stack1 \n 4:Pop in stack2 \n 5:Exit \n");
scanf("%d",&choice);
switch(choice)
{
 case 1:
  x=isoverflow(&S1);
  if(x==1)
  {
  printf("Stack overflow");
  break;
  }
  else
  {
  printf("Enter the item to be pushed");
  scanf("%d",&item);
  Push(&S1,item,1);
  }
 break;

 case 2:
  x=isoverflow(&S1);
  if(x==1)
  {
  printf("Stack overflow");
  break;
  }
  else
  {
  printf("Enter the item to be pushed");
  scanf("%d",&item);
  Push(&S1,item,2);
  }
  break;

  case 3:
  x=isunderflow(&S1);
  if(x==1)
  {
  printf("Stack underflow");
  break;
  }
  else
  {
  item=Pop(&S1,1);
  printf("Poped item = %d",item);
  }
  break;

  case 4:
  x=isunderflow(&S1);
  if(x==1)
  {
  printf("Stack underflow");
  break;
  }
  else
  {
  item=Pop(&S1,2);
  printf("Top Item = %d",item);
  }
  break;

  case 5:
  exit(1);
  break;

  default:
  printf("Wrong choice");
  exit(1);
  }
  getch();
 }
}
void Push(stack *P,int item,int type)
{
 if(type==1)
  {
   P->top1=P->top1+1;
   P->S[P->top1]=item;
  }
 else if(type==2)
  {
    P->top2=P->top2-1;
   P->S[P->top2]=item;
  }
 printf("Operation successful");
}
int Pop(stack *P,int type)
{
 int item;
 if (type==1)
  {
   item=P->S[P->top1];
   P->top1=P->top1-1;
  }
  else if(type==2)
  {
   item=P->S[P->top2];
   P->top2=P->top2+1;
  }
 return item;
}
int isoverflow(stack *P)
{
 if(P->top1<P->top2-1)
 return 0;
 else
 return 1;
}
int isunderflow(stack *P)
{
 if(P->top1>=0 || P->top2<MAX_STACK)
 return 0;
 else
 return 1;
}
