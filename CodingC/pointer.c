#include<stdio.h>
int main()
{
int a = 54;
int b = 20;
int *aa =&a;
int *bb =&b;
printf("%d",a);
printf("\n%p",aa);
printf("\n%d",b);
printf("\n%p",bb);
return 0;
}