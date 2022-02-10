#include<stdio.h>
void bubblesort(int x[], int );
void readnum(int x[], int );
void swap(int* ,  int*);
void print(int x[], int );
void main()
   {
     int a[100],n;
     printf("Enter the no: of elements: ");
     scanf("%d",&n);
     readnum(a,n);
     bubblesort(a,n);
     print(a,n);
  }
void readnum(int x[], int n )
{
   int  i ;
   printf("Enter the elements:");
   for(i=0;i<n;i++)
          scanf("%d",&x[i]);
}
 
void bubblesort(int x[], int n )
{
  int  p,i;
  for(p=1;p<n;p++)
    for(i=0;i<n-p;i++)
      {
         if(x[i]>x[i+1])
              swap(&x[i],&x[i+1]);
      }
}
 
void swap(int *p, int *q)
{
  int t;
  t=*p;
  *p=*q;
  *q=t;
}


void print(int x[], int n)
{ 
   int i ;
   printf("The sorted array is:");
  for(i=0;i<n;i++)
  printf("%d \n ",x[i]);
}
