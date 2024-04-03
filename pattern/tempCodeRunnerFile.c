/THE CODE IS WRITTEN BY RUDRA YADAV 221B312
//WAP TO SEARCH AN ELEMENT IN AN ARRAY
#include<stdio.h>
int main()
{
    int num,i,n,c=1;
    printf("enter the element to be searched\n");
    scanf("%d",&num);
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
        if(a[i]==num)
        {
         c++;
        }
    }
    if(c==2)
    {
        printf("ELEMENT IS  PRESENT\n");
    }
    else
        {
            printf("ELEMENT IS NOT PRESENT\n");
        }
    return 0;
}