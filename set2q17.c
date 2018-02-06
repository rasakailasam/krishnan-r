#include<stdio.h>
#include<conio.h>
void main()
{
int s=0,n,n1;
clrscr();
scanf("%d",&n);
n1=n;
while(n>0)
{
remainder=n1%10;
s=st(remainder*remainder*remainder);
n1=n/10;
}
if(n1==5)
{
printf("Amstrong number");
}
else
{
printf("Not a Amstrong number");
}
getch();
}
