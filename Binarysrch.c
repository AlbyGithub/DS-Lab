#include<stdio.h>
int bsrch(int A[],int n,int s);
void bubblesort(int A[], int n );
void swap(int*, int*);
void print(int A[], int n );
void main()
{
int i,n,A[50],pos,s;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&A[i]);
 bubblesort(A,n);
 print(A,n);
 printf("enter the element to be searched:");
 scanf("%d",&s);
  pos=bsrch(A,n,s);
 if(pos!=0)
   printf("\n Element is found at %d",pos);
 else
  printf("\n Element is not in the list");
}
int bsrch(int A[],int n,int s)
{
 int i,t=0,b=n-1,mid;
 while(t<=b)
 {
  mid=(t+b)/2;
  if (A[mid]!=s)
  {
   if (A[mid]<s)
    t=mid+1;
   else
    b=mid-1;
  }
  else
   return mid+1;
 }
void bubblesort(int A[], int n )
{
  int  p,i;
  for(p=1;p<n;p++)
    for(i=0;i<n-p;i++)
      {
         if(A[i]>A[i+1])
              swap(&A[i],&A[i+1]);
      }
}
 
void swap(int *p, int *q)
{
  int t;
  t=*p;
  *p=*q;
  *q=t;
}


void print(int A[], int n)
{ 
   int i ;
   printf("The sorted array is:");
  for(i=0;i<n;i++)
  printf("%d \n ",A[i]);
}



 return 0;
}
