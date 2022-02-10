#include<stdio.h>
void Read(int a[], int n);
void Ssort(int a[],int n);
void Swap(int*a,int*b);
void Print(int a[],int n);
void main()
{
   int a[100] ,n;
   printf("Enter the no: of elemnts : ");
   scanf("%d",&n);
   Read(a,n);
   Ssort(a,n);
   Print(a,n);

}

void Read(int a[], int n)
{
   int i;
   printf("Enter the elements:");
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
}
 
void Ssort(int a[] , int n)
{
  for (int i=0;i<n-1;i++)
   { 
      int small= a[i],ind=i;
      
      for(int j=i+1;j<n;j++)
            {
                if (a[j] < small)
                  {
                     small=a[j];
                     ind =j;
                  }
            }
       Swap(&a[i],&a[ind]);
    }
}
void Swap(int *a, int *b)
{
    int t;
    t=*a ;
    *a=*b ;
    *b=t;
}


void Print(int a[], int n)
{
   int i ;
   printf("The sorted array is:");
   for (i=0;i<n;i++)
     printf("%d\n",a[i]);

}
