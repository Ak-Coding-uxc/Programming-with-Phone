
#include<stdio.h>
int main()
{
int i;
int sum=0;
int a[5];
for(i=0;i<5;i=i+1)
{
printf("Enter elements %d ",i);
scanf("%d",&a[i]);
sum = sum + a[i];
}
printf("%d",sum);

return 0;
}
