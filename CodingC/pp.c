#include<stdio.h>
int main()
{
int a ,b,c;
char d = 'x';
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
printf("Enter c: ");
scanf("%d",&c);
printf ("%c\n",d);
int *aa =&a,*bb=&b ,*cc=&c;
char *ptr = &d;
printf("a=%d,b=%d,c=%d\n",a,b,c);
printf("%p\n",aa);
printf("%p\n",bb);
printf("%p\n",cc);
printf("%p\n",ptr);
return 0;
}
