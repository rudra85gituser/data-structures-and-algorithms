//THE CODE IS WRITTEN BY RUDRA YADAV 221B312
// WAP TO PRINT THE LOWER TRIANGULAR MATRIX IN ARREY
#include<stdio.h>
int main()
{
    int p,q;
    int a[p][q];
    int i,j;
    printf("enter the rows and columns of array\n");
    scanf("%d %d",&p,&q);
    printf("enter the elements of array\n");
    for(i=0;i<p;i++)
    {
         for(j=0;j<q;j++)
        {
             scanf("%d",&a[i][j]);
             }
    }
    for(i=0;i<p;i++)
    {
         for(j=0;j<q;j++)
        {
             if(j<=i)
             {
                printf("%d",a[i][j]);
             }
             else
             {
                printf("0");
             }
             }
    }
    
    return 0;
}