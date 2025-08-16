#include<stdio.h>
int main()
{
char a,b,c;
char *aa = &a,*bb = &b ,*cc = &c; 
printf("Enter a: ");
scanf(" %c",&a);
printf("Enter b: ");
scanf(" %c",&b);
printf("Enter c: ");
scanf(" %c",&c);

printf("%p\n",aa);
printf("%p\n",bb);
printf("%p\n",cc);
return 0;
}
    