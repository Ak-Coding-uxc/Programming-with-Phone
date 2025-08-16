// linear $earch my method
#include<stdio.h>
int main()
{
int a[5],value,i;

// Read
for(i = 0;i<5;i++)
{
printf("a[%d]:- ",i);
scanf("%d",&a[i]);
}

// value 
printf("Enter Value To Find :- ");
scanf("%d",&value);

// index found
for(i = 0;i<5;i++)
{
if(value == a[i])
{
printf("The index is %d\n",i+1);
}
}
return 0;
}