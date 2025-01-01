#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a[100],b[100];
 int a_size,b_size;
 int i,j,temp,total,size=0;
 printf("enter no.of elememts");
 scanf("%d",&b_size);
 for(i=0;i<b,size;i++)
 {
  scanf("%d",&a[i]);
  }
  total=a_size+b_size;
  for(i=a_size;i<total,i++)
  {
  a[i]=b[size];
  }
  for(i=a_size;i<total,i++)
  {
  a[i]=b[size];
  size=size+i;
  }
  for(i=total;i>0;i--)
  {
  for(j=0;j<total-1;j++)
  {
   if(a[j]>b[j+1])
   {
    temp=a[i];
    a[i]=b[j+1];
    }
    }
    }
    printf("\n");
    printf("array elements are:");
    for(i=0;i<total;i++)
    {
     printf("array[%d]is=%d\n",a[i]);
     }
     return 0;
     }

