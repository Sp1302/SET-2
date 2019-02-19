# SET-2
#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev=0,rem,y;
scanf("%d",&n);
y=n;
while(n>0)
{
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
}
if(y==rev)
{
printf("\nyes");
}
else
printf("\nNo");
getch();
}
