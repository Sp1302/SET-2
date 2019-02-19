# SET-2
#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,temp=0,c;
printf("\nenter the number");
scanf("%d",&n);
c=n;
while(n>0)
{
a=n%10;
temp=temp+(a*a*a);
n=n/10;
}
printf("%d\n",temp);
if(temp==c)
{
printf("\narmstrong number");
}
else
{
printf("not an armstrong number");
}
getch();
}
