#include<stdio.h>
int main()
{
int a[5];
int temp;
for(int i = 0;i<5;i++)
{
printf("Enter a[%d]: ",i);
scanf("%d",&a[i]);
}
// main task
for(int i =0;i<4;i++)
{
for(int j = 0;j<4-i;j++)
{
if(a[j]>a[j+1])
{
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
}
}
}
//output
for(int i = 0;i<5;i++)
{
printf("%d\n",a[i]);
}

return 0;
}