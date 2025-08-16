//Even No. 1 to 100

#include<stdio.h>
main()
{
int ctr=0;
label:
ctr=ctr+2;
printf("%d\n",ctr);
if(ctr<100)
goto label;
}