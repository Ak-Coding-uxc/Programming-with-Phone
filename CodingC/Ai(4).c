#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3];
    for(i = 0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
        printf("a%d%d: ",i,j);
        scanf("%d",&a[i][j]);
    }
    }
    int s=0;
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    s = s + a[i][j];
    }
    }
    printf("%d",s);
    return 0;
}