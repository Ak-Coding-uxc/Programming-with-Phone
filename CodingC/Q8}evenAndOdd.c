//Sum of Even and Odd No. 1 to 100

#include<stdio.h>
main()
{
int ctr1=-1,ctr2=0,sum1=0,sum2=0;
label:
ctr1=ctr1+2;
ctr2=ctr2+2;
sum1=ctr1+sum1;
sum2=ctr2+sum2;
if(ctr1,ctr2<100)
goto label;
printf("%d\n",sum1);
printf("%d\n",sum2);
}