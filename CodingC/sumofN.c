#include <stdio.h>
main()
{
int sum=0,n;
label:
printf("input number");
scanf("%d",&n);
sum=sum+n;
if(n=-99)
printf("sum of no%d",sum);
else{
goto label;}
}