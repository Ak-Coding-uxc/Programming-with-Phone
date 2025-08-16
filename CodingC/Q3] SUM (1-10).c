// Question 3) 1 to 10 .sum.
#include<stdio.h>
main()
{
    int ctr=0,sum=0;
    
label:
    ctr=ctr+1;
    sum=sum+ctr;
    
    if(ctr<10)
        goto label;
        
    printf("%d",sum);
}