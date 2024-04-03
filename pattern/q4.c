#include<stdio.h>
int main()
{
int i, j,r,space;
printf("ENTER THE LIMIT\n");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(space=1;space<=r-i;space++)
{
printf(" ");
}
for(j=1;j<=2*i-1;j++)
{
printf("*");
}
printf("\n");
}
for(i=r-1;i>=1;i--)
{
for(space=1;space<=r-i;space++)
{
printf(" ");
}
for(j=1;j<=2*i-1;j++)
{
printf("*");
}
printf("\n");
}
return 0;
}