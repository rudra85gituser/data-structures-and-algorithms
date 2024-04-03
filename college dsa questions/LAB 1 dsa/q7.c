//THE CODE IS WRITTEN BY RUDRA YADAV 221B312
//WAP TO sort array according to user choice
#include<stdio.h>
#include<conio.h>
int main()
{  
    int choice,arr[50], i, j, n, temp;
    printf("Enter total number of elements to store: ");
    scanf("%d", &n);
    printf("Enter %d elements:", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("ENTER 1 FOR ASCENDING ORDER AND 2 FOR DESCENDING ORDER\n");
    scanf("%d", &choice);
    if(choice==1)
    {
    printf("\nSorting array using bubble sort technique...\n");
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Array elements in ascending order:\n\n");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    getch();
    }
    else
    {
    printf("\nSorting array using bubble sort technique...\n");
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Array elements in descending order:\n\n");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    getch();
    }
    return 0;
}
