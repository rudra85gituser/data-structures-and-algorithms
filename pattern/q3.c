#include<stdio.h>
int main()
{
int i, j,r,q;
printf("ENTER THE LIMIT\n");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(j=1;j<=r;j++)
{
if(i==1||i==r||j==1||j==r||i==j||j==r-i+1)
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