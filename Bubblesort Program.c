#include<stdio.h>
void printarray(int* arr, int n)
{
    printf("{");
    for(int i=0; i<n; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("}");
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
int main()
{
    int arr[10];
    int n=10;
    printf("Enter the array:\n");
    for(int i=0; i<n; i++)
    {
        printf("Enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printarray(arr, n);
    printf("\n");
    bubblesort(arr, n);
    printf("\nSorted Array:");
    printarray(arr, n);
    return 0;
}
