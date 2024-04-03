#include<stdio.h>
int main()
{
int i, j,r;
printf("ENTER THE LIMIT\n");
scanf("%d",&r);
int c=2*r-1;
for(i=1;i<=c;i++)
{
for(j=1;j<=c;j++)
{
if(i==j||j==c-i+1)
{
printf("*");
}
else
{
printf(" ");
}
}
printf("\n");
}
return 0;
}