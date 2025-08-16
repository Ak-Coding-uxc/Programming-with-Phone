#include<stdio.h>
struct student{
char name[50];
int roll_no;
int marks;
};
int main(){

struct student a;
printf("name: ");
scanf("%s",&a.name);

printf("roll no.: ");
scanf("%d",&a.roll_no);

printf("marks: ");
scanf("%d",&a.marks);
struct student b;
printf("name: ");
scanf("%s",&b.name);

printf("roll no.: ");
scanf("%d",&b.roll_no);

printf("marks: ");
scanf("%d",&b.marks);

return 0;
}