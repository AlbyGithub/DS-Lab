#include<stdio.h>
void swap(int*a,int*b)
{
 int c;
 c=*a;
 *a=*b;
 *b=c;
}
int partition(int a[],int l,int r)
{
 int i=l+1,j=r;
 int key=a[l];
 do
 {
  while (a[i]<key&&i<r)
   i++;
  while (a[j]>key&&j>l)
   j--;
  if(i<j)
   swap(&a[i],&a[j]);
 }
 while (i<j);
  swap(&a[l],&a[j]);
 return j;
}
void qsort(int a[],int beg,int end)
{ 
 if(beg<end)
 {
  int pos=partition(a,beg,end);
  qsort(a,beg,pos-1);
  qsort(a,pos+1,end);
 }
}
int main()
{
 int i,n,a[30];
 printf("How many elements:\n");
 scanf("%d",&n);
 printf("Enter the array:\n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 qsort(a,0,n-1);
 printf("The sorted array is:\n");
 for(i=0;i<n;i++)
  printf("%d"" ",a[i]);
 return 0;
}
