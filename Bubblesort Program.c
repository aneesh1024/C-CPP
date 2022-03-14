#include<stdio.h>
void printarray(int* arr, int n)
{
    printf("{");
    for(int i=0; i<n-1; i++)
    {
        printf("%d, ",arr[i]);
    }
     printf("%d}",arr[n-1]);
}
void bubblesort(int *arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                 int temp;
                 temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
            }
        }
    }
}
void main()
{
    int arr[100];
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    char choice;
    do
    {
            printf("Enter the array:\n");
        for(int i=0; i<size; i++)
        {
            printf("Enter arr[%d]:",i);
            scanf("%d",&arr[i]);
        }
        printarray(arr, size);
        printf("\n");
        bubblesort(arr, size);
        printf("\nSorted Array:");
        printarray(arr, size);
        getchar();
        printf("\nDo you want to exit(Enter n for no and y for yes):");
        scanf("%c",&choice);
    }
    while(choice=='n');
}
