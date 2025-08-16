// linear search
#include<stdio.h>
void main()
{
int i,flag = 0,loc,item;
int a[10];
//read array
for(i = 0;i<10;i++)
{
printf("Enter Element a[%d]: ",i);
scanf("%d",&a[i]);
}

// search
printf("Enter Number to search: ");
scanf("%d",&item);

//index number
for(i = 0;i<10;i++)
{
if(a[i] == item)
{
flag  = 1;
loc = i ;
}
}
printf("The number found at %d",loc +1);
}
