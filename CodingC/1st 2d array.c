#include<stdio.h>
int main()
{
int a[3][4];
for(int i=0;i<3;i++)
{
for(int j=0;j<4;j++)
{
printf("Enter Element %d%d: ",i,j);
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<3;i++)
{
for(int j=0;j<4;j++)
printf("%d\n",a[i][j]);
}
return 0;
}
    