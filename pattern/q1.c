#include<stdio.h>
int main()
{
int i, j,r,q;
printf("ENTER THE LIMIT\n");
scanf("%d %d",&r,&q);
for(i=1;i<=r;i++)
{
for(j=1;j<=r;j++)
{
if(i==1||i==r||j==1||j==r)
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