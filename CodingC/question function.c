#include<stdio.h>
// fact
void factorial(int f)
{
int fact = 1;
for(int i=2;i<=f;i++)
{
fact = fact *i;
}
printf("the fact is %d",fact);
}



// multi
void multiplication(int m)
{
int multi;
for(int i=1;i<=10;i++)
{
multi = m*i;
printf("the multi of %d * %d is %d\n",m,i,multi);
}
}
,

int main(){
int n;
char task,m,f;
printf("Enter number: ");
scanf("%d",&n);

printf("Enter Task: ");
scanf(" %c",&task);

if(task=='m'){
multiplication(n);
}
else if(task=='f')
{
factorial(n);
}



return 0;
}