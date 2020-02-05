#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
void inputmatrix(int[][10],int,int);
void outputmatrix(int[][10],int,int);
void transpose(int[][10],int,int);
void upperdiagonal(int[][10],int,int);
void lowerdiagonal(int[][10],int);
void additionmatrix(int[][10],int[][10],int[][10],int,int);
void subtractionmatrix(int[][10],int[][10],int[][10],int,int);
void multiplicationmatrix(int[][10],int[][10],int[][10],int,int,int);
int a[10][10],b[10][10],c[10][10];
int choice,row1,col1,row2,col2;
clrscr();
//ask order of first matrix
printf("Enter row of first matrix \n");
scanf("%d",&row1);
printf("Enter column of first matrix \n");
scanf("%d",&col1);
//call input matrix
inputmatrix(a,row1,col1);
//ask order of second matrix
printf("Enter row of second matrix \n");
scanf("%d",&row2);
printf("Enter column of second matrix \n");
scanf("%d",&col2);
//call input matrix
inputmatrix(b,row2,col2);
//call output matrix
outputmatrix(a,row1,col1);
outputmatrix(b,row2,col2);
while(1)
{
//clrscr();
printf("\n Enter your choice \n 1:Transpose of matrix \n 2:Upper Diagonal \n 3:Lower Diagonal \n 4:Addition of two matrix \n 5:Subtraction of two matrix \n 6:Multiplication of two matrix \n 7:exit");
scanf("%d",&choice);
switch(choice)
{
case 1:
transpose(a,row1,col1);
break;

case 2:
upperdiagonal(a,row1,col1);
break;

case 3:
lowerdiagonal(a,row1);
break;

case 4:
if(row1==row2 && col1==col2)
{
additionmatrix(a,b,c,row1,col1);
}
break;

case 5:
if(row1==row2 && col1==col2)
{
subtractionmatrix(a,b,c,row1,col1);
}
break;

case 6:
if(col1==row2)
{
multiplicationmatrix(a,b,c,row1,col1,col2);
}
break;

case 7:
exit(1);
break;

default:
printf("Wrong choice");
exit(1);
}
getch();
}
}
void inputmatrix(int x[][10],int r,int c)
{
int i,j;
printf("Enter elements in array");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&x[i][j]);
}
}
}
void outputmatrix(int x[][10],int r,int c)
{
int i,j;
printf("Elements in array are \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d \t",x[i][j]);
}
printf("\n");
}
}
void transpose(int x[][10],int r,int c)
{
int i,j,t;
printf("Transpose of array is \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d \t",x[j][i]);
}
printf("\n");
}
}
void upperdiagonal(int x[][10],int r,int c)
{
int i,j,k;
printf("Upper Diagonal of array is \n");
for(i=0;i<r;i++)
{
printf("\n");
for(j=0;j<c;j++)
{
if(i<=j)
{
printf("%d \t",x[i][j]);
}
else
{
printf("\t");
}
}
}
}
void lowerdiagonal(int x[][10],int r)
{
int i,j;
printf("Lower Diagonal of array is \n");
for(i=0;i<r;i++)
{
for(j=0;j<=i;j++)
{
printf("%d \t",x[i][j]);
}
printf("\n");
}
}
void additionmatrix(int a[10][10],int b[10][10],int c[10][10],int row,int col)
{
int i,j;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d \t",c[i][j]);
}
printf("\n");
}
}
void subtractionmatrix(int a[10][10],int b[10][10],int c[10][10],int row,int col)
{
int i,j;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
c[i][j]=a[i][j]-b[i][j];
printf("%d \t",c[i][j]);
}
printf("\n");
}
}
void multiplicationmatrix(int a[10][10],int b[10][10],int c[10][10],int row1,int col1,int col2)
{
int i,j,k;
for(i=0;i<row1;i++)
{
for(j=0;j<col2;j++)
{
c[i][j]=0;
for(k=0;k<col1;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
printf("%d \t",c[i][j]);
}
printf("\n");
}
}
