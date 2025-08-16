#include<stdio.h>
int main()
{
int i,s=0,avg;
for(i=2;i<=1000;i=i+2)
{
s = s + i;
}
avg = s/500;
printf("%d",avg);
return 0;
}