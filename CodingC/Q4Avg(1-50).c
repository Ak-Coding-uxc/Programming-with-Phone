// Average 1 to 50

#include<stdio.h>
main()
{
int ctr=0,sum=0,average;
label:
ctr=ctr+1,sum=sum+ctr;
if(ctr<50)
goto label;
average=sum/ctr;
printf("%d", average);
}