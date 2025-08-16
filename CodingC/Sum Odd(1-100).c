// Sum Odd No.1 to 100 
#include<stdio.h>
main()
{
    int ctr=-1,sum=0;
    
label:
    ctr=ctr+2;
    sum=sum+ctr;
    
    
    if(ctr+2<100)
    
        goto label;
        printf("%d\n",sum);

}