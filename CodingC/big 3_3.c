#include<stdio.h>
int main()
{
int a[3][3];
for(int i=0;i<3;i++){
for(int j=0;j<3;j++)
{
printf("Enter a[%d][%d]: ",i,j);
scanf("%d",&a[i][j]);
}
}
int big = 0;
for(int i=0;i<3;i++){
for(int j=0;j<3;j++)
{
if(big<a[i][j])
big = a[i][j];
}
}
printf("The biggest element is %d",big);
}