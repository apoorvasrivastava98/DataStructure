#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int choice,a[50],n,item,loc;
void getdata(int [],int);
void putdata(int [],int);
int linear_search(int [],int,int);
int binary_search(int [],int,int);
int recursive_binary_search(int[],int,int,int);
clrscr();
printf("Enter the size of array");
scanf("%d",&n);
getdata(a,n);
putdata(a,n);
while(1)
{
//clrscr();
printf("\n Enter your choice 1:linear search 2:binary search 3:Recursive binary search 4:exit");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the item to be searched");
scanf("%d",&item);
loc=linear_search(a,n,item);
break;

case 2:
printf("Enter the item to be searched");
scanf("%d",&item);
loc=binary_search(a,n,item);
break;

case 3:
printf("Enter the item to be searched");
scanf("%d",&item);
loc=recursive_binary_search(a,0,n-1,item);
break;

case 4:
exit(1);
break;

default:
printf("Wrong choice");
exit(1);
}
if(loc>=0)
{
printf("element found at %d",loc);
}
else
{
printf("Item not found");
}
getch();
}
}
void getdata(int x[],int n)
{
int i;
printf("Enter elements in array");
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
}
void putdata(int x[],int n)
{
int i;
printf("array is: \n") ;
for(i=0;i<n;i++)
{
printf("%d \n",x[i]);
}
}
int linear_search(int x[],int n,int item)
{
int i;
for(i=0;i<n;i++)
{
if(x[i]==item)
{
return i;
}
}
return -1;
}
int binary_search(int x[],int n,int item)
{
int i,lb=0,ub=n-1,mid;
while(lb<=ub)
{
mid=(lb+ub)/2;
if(x[mid]==item)
{
return mid;
}
else if(item>x[mid])
{
lb=mid+1;
}
else
{
ub=mid-1;
}
}
return -1;
}
int recursive_binary_search(int a[],int beg,int end,int item)
{
int mid;
if(beg<=end)
{
mid=(beg+end)/2;
if(a[mid]==item)
return mid;
else if(a[mid]>item)
return recursive_binary_search(a,beg,mid-1,item);
else
return recursive_binary_search(a,mid+1,end,item);
}
return -1;
}
