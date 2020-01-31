#include<stdio.h>
#include<conio.h>
void main()
{
void TOH(int,char,char,char);
int n;
printf("Enter no of disc");
scanf("%d",&n);
TOH(n,'A','B','C');
getch();
}
void TOH(int n,char a,char b,char c)
{
if(n==1)
printf("move %c%c",a,b);
else
{
TOH(n-1,a,c,b);
printf("move %c to %c",a,b);
TOH(n-1,c,b,a);
}
}
