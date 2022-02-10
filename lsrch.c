#include<stdio.h>
void Read(int[],int);
void Lsearch(int[],int,int);
void main()
{
 int A[100],n;
 printf("Enter the size:");
 scanf("%d",&n);
 Read(A,n);
}
void Read(int A[],int n)
{
 int item,i;
 printf("Enter the elements:");
 for(i=0;i<n;i++)
  scanf("%d",&A[i]);
 printf("Element to be searched:");
 scanf("%d",&item);
 Lsearch(A,n,item);
}
void Lsearch(int A[],int n,int item)
{
 int flag=0,i;
 for(i=0;i<n;i++)
 {
  if (A[i]==item)
  {
   flag=1;
   break;
  }
 }
 if(flag==0)
  printf("The element is not present in the list");
 else
  printf("%d is present at position %d ",item,i+1);
}
