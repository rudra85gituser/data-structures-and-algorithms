//THE CODE IS WRITTEN BY RUDRA YADAV 221B312
// WAP TO FIND LARGEST ELEMENT IN AN ARRAY
#include<stdio.h>
int main()
{
    int max,i,n;
    printf("enter the limit of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
          max=a[i];
        }
    }
    printf("%dthe largest number in an arrey is=",max);
    return 0;
}