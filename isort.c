#include<stdio.h>
void Isort(int A[],int n);
void main()
{
int i,n,A[30];
 printf("Number of elements:");
 scanf("%d",&n);
 printf("enter the array:");
 for(i=0;i<n;i++)
  scanf("%d",&A[i]);
 Isort(A,n);
}
void Isort(int A[],int n)
{
 int p,i,j,key;
 for(p=1;p<n;p++)
 {
  key=A[p];
  for(j=p-1;j>=0&&A[j]>key;j--)
   {
   A[j+1]=A[j];
   }
  A[j+1]=key;
 }
 printf("The sorted array is:");
 for(i=0;i<n;i++)
 printf("%d ",A[i]);
}
