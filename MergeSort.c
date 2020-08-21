#include <stdio.h>
     int count =0;
     void merge(int[50],int,int,int); 
     void merge_sort(int[50],int,int); 
     void main()
      {
       void getdata(int[50],int);
       void putdata(int[50],int);
       int i,a[50],n;
       printf("Enter the value of n \n");
       scanf("%d",&n);
       getdata(a,n);
       printf("Before sorting \n");
       putdata(a,n);
       merge_sort(a,0,n-1);
       printf("After sorting \n");
       putdata(a,n);
       printf("value of count=%d \n",count);
      }
     void getdata(int x[50],int n)
       {
        int k;
        printf("enter the value  for sorting\n");
        for(k=0;k<n;k++)
        {
         scanf("%d",&x[k]);
        }     
       }
     void putdata(int x[50], int n)
       {
        int k;
        for(k=0;k<n;k++)
         {
          printf("%d\t",x[k]);
         }
          printf("\n");
        }
     void merge(int a[], int p, int q, int r) 
        { 
         int i, j, k; 
         int n1 =q-p+1; 
         int n2 =r-q; 
         int L[n1],R[n2]; 
         for(i=0;i<n1;i++)
          {
           L[i]=a[p+i];
          }
         for(j=0;j<n2;j++)
          {
           R[j]=a[q+1+j];
          }
         i=0; 
         j=0; 
         k=p; 
         while(i<n1 && j<n2) 
          {
           if(L[i] <= R[j]) 
            {
            a[k]=L[i]; 
            i++; 
            } 
           else 
            {
            a[k]=R[j];
            j++; 
            } 
           k++;
          } 
         while(i<n1) 
          {
           a[k]=L[i];
           i++;
           k++; 
          } 
         while(j<n2) 
          {
           a[k]=R[j];
           j++; 
           k++; 
          }
        } 
       void merge_sort(int a[50],int p,int r)
        {
         int q;
	       if(p<r)
	       {
             q=(p+r)/2;
	           merge_sort(a,p,q);
	           merge_sort(a,q+1,r);
             merge(a,p,q,r);
          }
        }
