#include<stdio.h>
int main()
{
    char a;
    char b;
    char c;
    printf("Enter a: ");
    scanf("%c",&a);
    
    printf("Enter b: ");
    scanf(" %c",&b);
   
    printf("Enter c: ");
    scanf(" %c",&c);
    
    int *aa =&a;
    int *bb =&b;
    int *cc =&c;
    printf("a= %c\n",a);
    printf("b= %c\n",b);
    printf("c= %c\n",c);
    
    printf("address of a= %p\n",aa);
    printf("address of b= %p\n",bb);
    printf("address of c= %p\n",cc);
    
    return 0;
}