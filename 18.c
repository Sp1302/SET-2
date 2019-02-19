# SET-2
#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,a,temp=0,c,i;
printf("\nenter the number");
scanf("%d%d",&n,&m);
for(i=n;i<m;i++)
{
    c=n;
while(n>0)
{
a=n%10;
temp=temp+(a*a*a);
n=n/10;
}
if(temp==c)
{
printf("\narmstrong number");
}
else
{
printf("\nnot an armstrong number");
}
}
getch();
}
