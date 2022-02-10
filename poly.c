#include<stdio.h>
typedef struct
{ 
 int coeff;
 int exp_x;
 int exp_y;
 int exp_z;
}terms;
void main()
{
 int i,n;
 printf("Enter the no. of terms:");
 scanf("%d",&n);
 terms poly[n];
 for(i=0;i<n;i++)
{
 printf("Enter coefficient of term %d:", i+1);
 scanf("%d",&poly[i].coeff);
 printf("Enter exponents of x in terms %d:",i+1);
 scanf("%d",&poly[i].exp_x);
 printf("Enter exponents of y in terms %d:",i+1);
 scanf("%d",&poly[i].exp_y);
 printf("Enter exponents of z in terms %d:",i+1);
 scanf("%d",&poly[i].exp_z);
}
printf("Polynomial is:");
for(i=0;i<n;i++)
{
 printf("%d x^%d y^%d z^%d",poly[i].coeff,poly[i].exp_x,poly[i].exp_y,poly[i].exp_z);
 if(i!=n-1)
  printf("+");
 }
}
