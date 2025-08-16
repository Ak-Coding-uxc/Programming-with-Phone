#include<stdio.h>

int double_number(int n){
int x = n*2;
printf ("the double of %d is %d",n,x);
}


int main()
{
int n;
printf ("Enter Number: ");
scanf("%d",&n);
double_number(n);
return 0;
}