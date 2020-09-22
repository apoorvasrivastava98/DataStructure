#include <stdio.h>
void max_heapify(int[100],int,int);
void build_max_heap(int[100],int);
void heapsort(int[100],int);
    void main()
    {
        void getdata(int[100],int);  
        void putdata(int[100],int);  
        int a[100],n;  
        printf("Enter the value of n\n");    
        scanf("%d",&n);  
        getdata(a,n);    
        printf("Before sorting \n");    
        putdata(a,n);
        heapsort(a,n);
        printf("After sorting \n");    
        putdata(a,n);     
    }
    void getdata(int x[100],int n)
       {
        int k;
        printf("enter the value  for sorting\n");
        for(k=0;k<n;k++)
        {
         scanf("%d",&x[k]);
        } 
       }
    void putdata(int x[100], int n)
        {
          int k;
          for(k=0;k<n;k++)
         {
          printf("%d\t",x[k]);
         }
          printf("\n");
        }
    void max_heapify(int a[100],int n,int i)
    {
        int temp;
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        if(left<n && a[left]>a[largest])
        {
            largest=left;
        }
        if(right<n && a[right]>a[largest])
        {
            largest=right;
        }
        if(largest!=i)
        {
            temp=a[i];
            a[i]=a[largest];
            a[largest]=temp;
            max_heapify(a,n,largest);
        }
    }
    void build_max_heap(int a[100],int n)
    {
        int i;
        for(i=(n/2)-1;i>=0;i--)
        {
            max_heapify(a,n,i);
        }
    }
    void heapsort(int a[100],int n)
    {
        int temp,i;
        build_max_heap(a,n);
        for(i=n-1;i>0;i--)
        {
            temp=a[0];
            a[0]=a[i];
            a[i]=temp;
            max_heapify(a,i,0);
        }
    }
