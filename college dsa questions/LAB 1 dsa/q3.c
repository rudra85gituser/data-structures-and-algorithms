//THE CODE IS WRITTEN BY RUDRA YADAV 221B312
//WAP TO CHECK WHETHER A NUMBER IS PRIME OR NOT
#include<stdio.h>
int main()
{
    int num,i,c=0;
    printf("enter the number to  be checked\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        if(num%i==0)
        {
         c++;
        }
    }
    if(c==2)
    {
        printf("ELEMENT IS  PRIME\n");
    }
    else
        {
            printf("ELEMENT IS NOT PRIME\n");
        }
    return 0;
}