/* BUBBLE SORT */
#include<stdio.h>
int main()
{
int arr[5];
int i,j,temp;
// input VALUES
for(i=0;i<5;i++)
{
printf("Enter a[%d]: ",i);
scanf("%d",&arr[i]);
}
// sorting
for(i = 0;i<5;i++)
{
for(j=0;j<5-i;j++)
{
if(a[j]>a[j+1])
{
temp = a[j];
a[j] = a[j + 1];
a[j + 1] = temp;
}
}
}
// print in sort
for(i=0;i<5;i++)
{
printf("%d\n",&arr[i]);
}

return 0;
}