#include<stdio.h>
//print array
void PrintArray(int* A,int n)
{
for(int i =0;i<n;i++)
{
printf("%d\n",A[i]);
}
}

// Bubble Sort

void BubbleSort(int *a,int n)
{
int temp;
for(int i = 0;i<n;i++)
{
for(int j = 0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
}
}
}
}


int main()
{
int A[] = {4,10,3,1,15};
int n=5;
printf("Before Sorting\n");
PrintArray(A,n);
BubbleSort(A,n);
printf("\n\n After Sorting\n");
PrintArray(A,n);
return 0;
}


