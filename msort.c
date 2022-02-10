#include<stdio.h>
void simplemerge(int x[],int f,int s,int t);
void mergesort(int x[],int beg,int end);
void print(int x[],int p);
void main()
{
 int i,n,A[100];
 printf("Enter the number of elements:*");
 scanf("%d",&n);
 printf("Enter the elements: ");
 for(i=0;i<n;i++)
  {scanf("%d",&A[i]);
}
 mergesort(A,0,n-1);
 print(A,n);
}
void mergesort(int x[],int beg,int end)
{
 int mid;
 if(beg<end)
 {
  mid=(beg+end)/2;
  mergesort(x,beg,mid);
  mergesort(x,mid+1,end);
  simplemerge(x,beg,mid+1,end);
 }
}
void simplemerge(int x[],int f,int s,int t)
{
 int temp[100],i=f,j=s,k=0;
 while(i<s && j<=t)
 {
 if(x[i]<x[j])
  temp[k++]=x[i++];
 else
  temp[k++]=x[j++];
 }
 while(i<s)
  temp[k++]=x[i++];
 while(j<=t)
  temp[k++]=x[j++];

 for(i=f,j=0;j<k;)
     x[i++]=temp[j++];
}
void print(int x[],int p)
{
 int i;
 printf("\n Sorted array is: ");
 for(i=0;i<p;i++)
  printf("\n%d ",x[i]);
}
