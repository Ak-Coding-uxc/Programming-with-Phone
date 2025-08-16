#include<stdio.h>
int main()
{
int a[2][2];
int bool=1;
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
for(int k=2;k<(a[i][j]-1);k++){
if(a[i][j]%k==0) bool=0;
if(bool==0) break;
}
if(a[i][j]==1) printf("1 is not composite nor prime numbers\n");
if(bool==1) printf("%d\n",a[i][j]);
bool = 1;
}
} 
return 0;
}