# SET-2
#include<stdio.h>
#include<conio.h>
void main()
{
int n,flag=0,i;
printf("\nenter the number");
scanf("%d",&n);
for(i=0;i<n/2;i++)
{
if(n%2==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("\nprime");
}
else
{
printf("\nnot prime");
}
getch();
}
