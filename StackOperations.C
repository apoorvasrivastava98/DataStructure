#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX_STACK 10
#define NIL -1
typedef struct Stacktype
{
int S[MAX_STACK];
int top;
}stack;
void main()
{
void Push(stack *,int);
int Pop(stack *);
int isoverflow(stack *);
int isunderflow(stack *);
int peep(stack *);
int choice,item,x;
stack S1,S2;
S1.top=NIL;
clrscr();
while(1)
{
//clrscr();
printf("\n Enter your choice \n 1:Push \n 2:Pop \n 3:Peep \n 4:Exit \n");
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
Push(&S1,item);
}
break;

case 2:
x=isunderflow(&S1);
if(x==1)
{
printf("Stack underflow");
break;
}
else
{
item=Pop(&S1);
printf("Poped item = %d",item);
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
item=Peep(&S1);
printf("Top Item = %d",item);
}
break;

case 4:
exit(1);
break;

default:
printf("Wrong choice");
exit(1);
}
getch();
}
}
void Push(stack *P,int item)
{
P->top=P->top+1;
P->S[P->top]=item;
printf("Operation successful");
}
int Pop(stack *P)
{
int item;
item=P->S[P->top];
P->top=P->top-1;
return item;
}
int isoverflow(stack *P)
{
if(P->top==MAX_STACK)
return 1;
else
return 0;
}
int isunderflow(stack *P)
{
if(P->top==NIL)
return 1;
else
return 0;
}
int Peep(stack *P)
{
int item;
item=P->S[P->top];
return item;
}
