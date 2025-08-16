#include<stdio.h>
int main()
{
    int i,j;
    int a[4][4];
    for(i = 0;i<4;i++)
    {
        for(j=0;j<4;j++)
    {
        printf("a%d%d: ",i,j);
        scanf("%d",&a[i][j]);
    }
    }
    int s=0;
    for(i=0;i<4;i++)
    {
    for(j=0;j<4;j++)
    {
    s += a[i][j];
    }
    }
    printf("%d",s);
    return 0;
}