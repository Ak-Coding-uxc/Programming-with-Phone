// Q6) Odd No.1 to 100 
#include<stdio.h>
main()
{
    int ctr=-1;
    
label:
    ctr=ctr+2;
    printf("%d\n",ctr);
    
    if(ctr+2<100)
        goto label;
}