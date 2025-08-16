#include <stdio.h>
main()
{
int ctr=0;
label:
ctr=ctr+1;
printf("%d\n",ctr);
if(ctr<10)
goto label;
}