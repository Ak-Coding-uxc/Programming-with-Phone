
#include<stdio.h>
int main()
{
int i;
int a[5];
for(i=1;i<=5;i=i+1)
{
printf("Enter Dimension ");
scanf("%d",&a[i]);
}

printf("%d",a[3]);
}