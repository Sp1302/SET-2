# SET-2
#include<stdio.h>
#include<conio.h>
void main()
{
int n,fact=1,i;
printf("\nEnter the value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d\n",fact);
getch();
}
