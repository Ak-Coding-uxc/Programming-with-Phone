#include<stdio.h>
int main()
{
int i;
int a[5];
int b[5];
for(i = 0;i<5;i++)
{
printf("Enter Element a%d: ",i);
scanf("%d",&a[i]);
}

for(i=0;i<5;i++)
{

b[i]=a[5-1];
}
for(i = 0;i<5;i++)
{
printf("%d\n",b[i]);
}
return 0;
}
    