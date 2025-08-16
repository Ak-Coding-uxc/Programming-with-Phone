#include<stdio.h>
int main()
{
int a[3][3];
for(int i=0;i<3;i++){
for(int j=0;j<3;j++)
{
printf("Enter a[%d][%d]: ",i,j);
scanf("%d",&a[i][j]);
}}

int small = a[0][0];
for(int i=0;i<3;i++){
for(int j=0;j<3;j++)
{
if(small>a[i][j])
small = a[i][j];
}}

printf("The smallest element is %d",small);
}