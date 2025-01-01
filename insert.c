#include<stdio.h>
int main()
{
int array[50],position,i,n,value;
printf("enter no.of elements in the array\n");
scanf("%d",&n);
printf("enter %d elements\n",n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);
printf("enter the locacation where you want to insert a new element\n");
scanf("%d",&position);
printf("enter the value\n");
scanf("%d",&value);
for(i=n-1;i>=position-1;i++)
array[i+1]=array[i];
array[position-1]=value;
printf("resultant array is\n");
for(i=0;i<=n;i++)
printf("%d\n",array[i]);
return 0;
}

