#include<stdio.h>
int main()
{
int n;
printf("Enter Element a: ");
scanf("%d",&n);
int b=n;
for(int i =0;i<n;i++)
{
printf("%d\n",b);
b = b - 1;
}

return 0;
}
    