#include<stdio.h>
int main()
{
int n = 15;
int fact = 1;
int i = 1;
do{

fact = fact * i;
i = i + 1;
}
while(i<=15);
printf("%d\n",fact);
return 0;
}